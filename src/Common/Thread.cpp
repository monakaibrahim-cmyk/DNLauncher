#include "Thread.h"

namespace
{
#pragma pack(push, 8)
    struct THREADNAME_INFO
    {
        DWORD  dwType;     // Must be 0x1000
        LPCSTR szName;     // Pointer to name (in user address space)
        DWORD  dwThreadID; // Thread ID (-1 = caller thread)
        DWORD  dwFlags;    // Reserved for future use, must be zero
    };
#pragma pack(pop)

    const DWORD MS_VC_EXCEPTION = 0x406D1388;
}

CThread::CThread()
    : m_hThread(INVALID_HANDLE_VALUE)
    , m_dwThreadID(0)
    , m_bRunning(FALSE)
{
}

CThread::~CThread()
{
    m_bRunning = FALSE;
}

bool CThread::Start()
{
    if (m_hThread == INVALID_HANDLE_VALUE)
    {
        m_hThread = ::CreateThread(nullptr, 0, &CThread::ThreadProc, this, 0, &m_dwThreadID);
        if (m_hThread != nullptr)
        {
            m_bRunning = TRUE;
            return true;
        }
        m_hThread = INVALID_HANDLE_VALUE;
    }
    return false;
}

bool CThread::End(DWORD dwTimeout)
{
    if (m_hThread == INVALID_HANDLE_VALUE)
    {
        return false;
    }

    m_bRunning = FALSE;
    ::WaitForSingleObject(m_hThread, dwTimeout);
    ::CloseHandle(m_hThread);
    m_hThread = INVALID_HANDLE_VALUE;
    m_dwThreadID = 0;
    return true;
}

DWORD WINAPI CThread::ThreadProc(LPVOID pParam)
{
    CThread* pThread = static_cast<CThread*>(pParam);
    if (pThread)
    {
        pThread->Run();
    }
    return 0;
}

void CThread::SetThreadName(DWORD dwThreadID, const char* szThreadName)
{
    THREADNAME_INFO info;
    info.dwType = 0x1000;
    info.szName = szThreadName;
    info.dwThreadID = dwThreadID;
    info.dwFlags = 0;

    __try
    {
        ::RaiseException(
            MS_VC_EXCEPTION,
            0,
            sizeof(info) / sizeof(ULONG_PTR),
            reinterpret_cast<ULONG_PTR*>(&info));
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
    }
}
