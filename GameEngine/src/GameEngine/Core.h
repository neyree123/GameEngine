#pragma once

//_declspec(dllexport) is windows only
#ifdef GE_PLATFORM_WINDOWS
	//Export if we are the dll
	#ifdef GE_BUILD_DLL
		#define GameEngine_API _declspec(dllexport)
	//Otherwise import
	#else
		#define GameEngine_API _declspec(dllimport)
	#endif 
#else
	#error This game engine only currently supports windows!
#endif