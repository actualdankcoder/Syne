#include <stdio.h>
#include <string>

#if defined(__linux__)
    #define PLATFORM "linux"
#elif defined(_WIN32) 
    #define PLATFORM "windows"
#else
    #define PLATFORM "undefined_subsystem"
#endif

std::string GetPlatform() {
    return PLATFORM;
}