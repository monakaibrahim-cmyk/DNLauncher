#pragma once

#include <windows.h>
#include <tchar.h>

/**
 * Logging facility reconstructing DNLauncher's global LogWnd window/file logger.
 * Format strings, timestamp layout, and listbox wrapping behavior match the original binary.
 */
namespace LogWnd
{
    enum LogTarget
    {
        LOG_TARGET_WINDOW = 0x01,
        LOG_TARGET_FILE   = 0x02,
        LOG_TARGET_ALL    = 0x03
    };

    namespace LogLevel
    {
        enum Type
        {
            Error   = 0,
            Warning = 1,
            Info    = 2,
            Debug   = 3
        };
    }

    /** Initialize global log singleton and write initial startup entry. */
    bool CreateLog(bool bEnable = true, DWORD dwTarget = LOG_TARGET_FILE);

    /** Tear down global log singleton if initialized. */
    void DestroyLog();

    /** Enable or disable log output at runtime. */
    void SetLogEnable(bool bEnable);

    /** Attach a listbox control for LOG_TARGET_WINDOW output. */
    void SetListBoxHwnd(HWND hListBox);

    /** Write formatted log entry with explicit severity level (>= 0). */
    void Log(int nLogLevel, const TCHAR* szFmt, ...);

    /** Write formatted trace entry (info/trace stream). */
    void TraceLog(const TCHAR* szFmt, ...);
}
