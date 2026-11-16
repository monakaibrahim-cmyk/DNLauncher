#include "LogWnd.h"
#include "CriticalSection.h"

#include <cstdarg>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <string>

namespace LogWnd
{
    namespace
    {
        const TCHAR* GetLevelString(int nLogLevel)
        {
            switch (nLogLevel)
            {
            case LogLevel::Error:   return _T("error");
            case LogLevel::Warning: return _T("warning");
            case LogLevel::Info:    return _T("info");
            case LogLevel::Debug:   return _T("debug");
            default:                return nullptr;
            }
        }

        void AppendWrappedToListBox(HWND hListBox, const std::wstring& line)
        {
            if (!hListBox || !::IsWindow(hListBox) || line.empty())
            {
                return;
            }

            const size_t kWrapWidth = 0x41; // 65 chars per original LB_ADDSTRING wrap loop
            size_t offset = 0;
            while (offset < line.size())
            {
                std::wstring chunk = line.substr(offset, kWrapWidth);
                ::SendMessageW(hListBox, LB_ADDSTRING, 0, reinterpret_cast<LPARAM>(chunk.c_str()));
                LRESULT count = ::SendMessageW(hListBox, LB_GETCOUNT, 0, 0);
                if (count > 0)
                {
                    ::SendMessageW(hListBox, LB_SETCURSEL, static_cast<WPARAM>(count - 1), 0);
                }
                offset += kWrapWidth;
            }
        }

        void WriteLineToFile(const TCHAR* szFilePath, const wchar_t* szWideLine)
        {
            if (!szFilePath || szFilePath[0] == _T('\0') || !szWideLine)
            {
                return;
            }

            FILE* fp = nullptr;
            if (_tfopen_s(&fp, szFilePath, _T("a+")) != 0 || !fp)
            {
                return;
            }

            char szAnsi[2048] = {};
            int len = ::WideCharToMultiByte(CP_ACP, 0, szWideLine, -1, szAnsi, sizeof(szAnsi) - 1, nullptr, nullptr);
            if (len > 0)
            {
                std::fprintf(fp, "%s\n", szAnsi);
            }
            std::fclose(fp);
        }

        class __LogWnd
        {
        public:
            __LogWnd(bool bEnable, DWORD dwTarget)
                : m_bEnable(bEnable ? TRUE : FALSE)
                , m_dwTarget(dwTarget)
                , m_hListBox(nullptr)
            {
                std::memset(m_szLogFilePath, 0, sizeof(m_szLogFilePath));
                BuildLogFilePath();
                WriteEntry(LogLevel::Info, _T("Logging Start.."));
            }

            virtual ~__LogWnd() = default;

            void SetEnable(bool bEnable)
            {
                m_bEnable = bEnable ? TRUE : FALSE;
            }

            void SetListBox(HWND hListBox)
            {
                m_hListBox = hListBox;
            }

            void WriteEntry(int nLogLevel, const wchar_t* szMessage)
            {
                if (!m_bEnable || !szMessage)
                {
                    return;
                }

                ScopeLock<CSyncLock> lock(m_cs);

                std::time_t now = std::time(nullptr);
                std::tm localTm = {};
                localtime_s(&localTm, &now);

                wchar_t szFormatted[2304] = {};
                const wchar_t* szLevel = GetLevelString(nLogLevel);
                if (szLevel)
                {
                    const wchar_t* szFmt = (m_dwTarget & LOG_TARGET_WINDOW)
                        ? L"%04d%02d%02d%02d%02d%02d  [%s]    %s"
                        : L"%04d%02d%02d%02d%02d%02d  [%s]\t%s";
                    _snwprintf_s(
                        szFormatted, _countof(szFormatted), _TRUNCATE, szFmt,
                        localTm.tm_year + 1900, localTm.tm_mon + 1, localTm.tm_mday,
                        localTm.tm_hour, localTm.tm_min, localTm.tm_sec,
                        szLevel, szMessage);
                }
                else
                {
                    _snwprintf_s(
                        szFormatted, _countof(szFormatted), _TRUNCATE,
                        L"[Lv:%d]=>%s", nLogLevel, szMessage);
                }

                if (m_dwTarget & LOG_TARGET_FILE)
                {
                    WriteLineToFile(m_szLogFilePath, szFormatted);
                }
                if (m_dwTarget & LOG_TARGET_WINDOW)
                {
                    AppendWrappedToListBox(m_hListBox, szFormatted);
                }
            }

        private:
            void BuildLogFilePath()
            {
                wchar_t szModule[MAX_PATH] = {};
                ::GetModuleFileNameW(nullptr, szModule, MAX_PATH);

                wchar_t szDrive[_MAX_DRIVE] = {};
                wchar_t szDir[_MAX_DIR] = {};
                wchar_t szFname[_MAX_FNAME] = {};
                wchar_t szExt[_MAX_EXT] = {};
                _wsplitpath_s(szModule, szDrive, _countof(szDrive), szDir, _countof(szDir),
                              szFname, _countof(szFname), szExt, _countof(szExt));

                wchar_t szLogDir[MAX_PATH] = {};
                _snwprintf_s(szLogDir, _countof(szLogDir), _TRUNCATE, L"%s%s\\Log", szDrive, szDir);
                if (::GetFileAttributesW(szLogDir) != FILE_ATTRIBUTE_DIRECTORY)
                {
                    ::CreateDirectoryW(szLogDir, nullptr);
                }

                std::time_t now = std::time(nullptr);
                std::tm localTm = {};
                localtime_s(&localTm, &now);

                _snwprintf_s(
                    m_szLogFilePath, _countof(m_szLogFilePath), _TRUNCATE,
                    L"%s%s\\Log\\%s_%04d%02d%02d_%02d%02d%02d_Log.txt",
                    szDrive, szDir, szFname,
                    localTm.tm_year + 1900, localTm.tm_mon + 1, localTm.tm_mday,
                    localTm.tm_hour, localTm.tm_min, localTm.tm_sec);
            }

            BYTE             m_bEnable;
            DWORD            m_dwTarget;
            TCHAR            m_szLogFilePath[1024];
            HWND             m_hListBox;
            CSyncLock        m_cs;
        };

        __LogWnd* g_pLog = nullptr;
        TCHAR     g_szLogBuffer[2048] = {};
        CSyncLock g_csLogBuffer;

        void DispatchFormatted(int nLogLevel, const TCHAR* szFmt, va_list args)
        {
            if (nLogLevel < 0 || !g_pLog || !szFmt)
            {
                return;
            }

            ScopeLock<CSyncLock> lock(g_csLogBuffer);
            std::memset(g_szLogBuffer, 0, sizeof(g_szLogBuffer));
            _vsntprintf_s(g_szLogBuffer, _countof(g_szLogBuffer), _countof(g_szLogBuffer) - 1, szFmt, args);
            g_szLogBuffer[_countof(g_szLogBuffer) - 1] = _T('\0');
            g_pLog->WriteEntry(nLogLevel, g_szLogBuffer);
        }
    } // namespace

    bool CreateLog(bool bEnable, DWORD dwTarget)
    {
        if (g_pLog != nullptr)
        {
            return false;
        }
        g_pLog = new __LogWnd(bEnable, dwTarget);
        return (g_pLog != nullptr);
    }

    void DestroyLog()
    {
        if (g_pLog != nullptr)
        {
            delete g_pLog;
            g_pLog = nullptr;
        }
    }

    void SetLogEnable(bool bEnable)
    {
        if (g_pLog)
        {
            g_pLog->SetEnable(bEnable);
        }
    }

    void SetListBoxHwnd(HWND hListBox)
    {
        if (g_pLog)
        {
            g_pLog->SetListBox(hListBox);
        }
    }

    void Log(int nLogLevel, const TCHAR* szFmt, ...)
    {
        if (nLogLevel < 0 || !g_pLog || !szFmt)
        {
            return;
        }
        va_list args;
        va_start(args, szFmt);
        DispatchFormatted(nLogLevel, szFmt, args);
        va_end(args);
    }

    void TraceLog(const TCHAR* szFmt, ...)
    {
        if (!g_pLog || !szFmt)
        {
            return;
        }
        va_list args;
        va_start(args, szFmt);
        DispatchFormatted(LogLevel::Info, szFmt, args);
        va_end(args);
    }
}
