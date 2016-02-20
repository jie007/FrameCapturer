﻿#ifdef _MSC_VER
    #pragma warning(disable: 4190)
    #define _CRT_SECURE_NO_WARNINGS
#endif

#include <algorithm>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <map>
#include <memory>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <atomic>
#include <functional>
#include <fstream>
#include <sstream>

#define fcImpl

#if defined(_WIN32)
    #define fcWindows
#elif defined(__APPLE__)
    #ifdef TARGET_OS_IPHONE
        #define fciOS
    #else
        #define fcMac
    #endif
#elif defined(__ANDROID__)
    #define fcAndroid
#elif defined(__linux__)
    #define fcLinux
#endif

#ifdef fcDebug
    void DebugLogImpl(const char* fmt, ...);
    #define fcDebugLog(...) DebugLogImpl(__VA_ARGS__)
#else
    #define fcDebugLog(...)
#endif

#ifdef _WIN32
    #define fcSupportOpenGL
    #define fcSupportD3D9
    #define fcSupportD3D11

    #define fcSupportFAAC
    #define fcSupportOpenH264
    #define fcSupportNVH264
    #define fcSupportAMDH264
#else
    #define fcSupportOpenGL

    #define fcSupportFAAC
    #define fcSupportOpenH264
    #define fcSupportNVH264
#endif

//#define fcGIFSplitModule
#define fcEXRSplitModule
#define fcMP4SplitModule
