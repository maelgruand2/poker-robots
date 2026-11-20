// dllmain.cpp : Define el punto de entrada de la aplicación DLL.
#include "pch.h"
#include "RoboDealerAPI.h"

extern "C" {
	ROBO_API int32_t PingEngine(int32_t value) {
		return value * 2;
	}
}