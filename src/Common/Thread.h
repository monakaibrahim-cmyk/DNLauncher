#pragma once

#include <windows.h>

/**
 * Lightweight Win32 thread wrapper matching DNLauncher's CThread subobject layout (16 bytes).
 * vptr (+0), m_hThread (+4), m_dwThreadID (+8), m_bRunning (+0xC).
 */
class CThread
{
public:
    CThread();
    virtual ~CThread();

    /** Entrypoint overridden by worker subclasses. */
    virtual void Run() = 0;

    /** Spawn Win32 worker thread if not already active. */
    bool Start();

    /** Signal stop and wait for thread exit before closing handle. */
    bool End(DWORD dwTimeout = INFINITE);

    bool IsRunning() const { return m_bRunning != FALSE; }
    HANDLE GetThreadHandle() const { return m_hThread; }
    DWORD GetThreadID() const { return m_dwThreadID; }

    /** Notify attached MSVC debugger of thread name via exception 0x406D1388. */
    static void SetThreadName(DWORD dwThreadID, const char* szThreadName);

protected:
    static DWORD WINAPI ThreadProc(LPVOID pParam);

    HANDLE m_hThread;
    DWORD  m_dwThreadID;
    BOOL   m_bRunning;
};
