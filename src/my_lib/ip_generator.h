#pragma once
#include <filesystem>
#include <iostream>
#include <fstream>
#include <random>
#include <Windows.h>

inline std::mt19937& my_gen() {
	static std::random_device device;
	static std::mt19937 random_generator(device());
	return random_generator;
}

extern "C" {
	__declspec(dllexport) void generate(const char* path, int64_t count_of_adresses);
}

BOOL APIENTRY DllMain(HMODULE hModule,
    DWORD  ul_reason_for_call,
    LPVOID lpReserved
)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
        break;
    case DLL_THREAD_DETACH:
        break;
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

