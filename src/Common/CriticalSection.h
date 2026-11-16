#pragma once

#include <windows.h>
#include <cassert>

/**
 * Win32 critical section wrapper matching observed initialization semantics
 * (`InitializeCriticalSectionAndSpinCount(&m_cs, 2000)` + line-12 assert).
 */
class CSyncLock {
public:
    CSyncLock() {
        BOOL bResult = ::InitializeCriticalSectionAndSpinCount(&m_cs, 2000);
        assert(bResult != FALSE);
    }

    ~CSyncLock() {
        ::DeleteCriticalSection(&m_cs);
    }

    void Lock() { ::EnterCriticalSection(&m_cs); }
    void Unlock() { ::LeaveCriticalSection(&m_cs); }

private:
    CRITICAL_SECTION m_cs;

    CSyncLock(const CSyncLock&);
    CSyncLock& operator=(const CSyncLock&);
};

template <typename T>
class ScopeLock {
public:
    explicit ScopeLock(T& lock) : m_lock(lock), m_bLocked(true) {
        m_lock.Lock();
    }
    ~ScopeLock() {
        if (m_bLocked) {
            m_lock.Unlock();
        }
    }
    void Unlock() {
        if (m_bLocked) {
            m_lock.Unlock();
            m_bLocked = false;
        }
    }

private:
    T& m_lock;
    bool m_bLocked;

    ScopeLock(const ScopeLock&);
    ScopeLock& operator=(const ScopeLock&);
};
