#pragma once

#ifdef SX_PLATFORM_WINDOWS
	#ifdef SX_BUILD_DLL
		#define SIMULUX_API __declspec(dllexport)
	#else
		#define SIMULUX_API __declspec(dllimport)
	#endif
#else 
	#error Simulux only support Windows!!
#endif