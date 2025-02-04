#pragma once

// DLL Import / Export Macro
#ifdef F_PlatformWindows

	#ifdef F_BuildDll

		#define Fyragic_API __declspec(dllexport)
	
	#else	
		#define Fyragic_API __declspec(dllimport)

	#endif
#else

	#error Fyragic Engine only supports Windows for now!

#endif