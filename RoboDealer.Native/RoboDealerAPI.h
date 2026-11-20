#pragma once
#include <cstdint>

#ifdef ROBODEALERNATIVE_EXPORTS
#define ROBO_API __declspec(dllexport)
#else
#define ROBO_API __declspec(dllimport)
#endif

extern "C" {
	ROBO_API int32_t PingEngine(int32_t value);
}
