#ifndef __FORCEINCLUDE_WIN64_DEBUG__
#define __FORCEINCLUDE_WIN64_DEBUG__

#define _WIN64 	1
#define _PC 	1
#define _LINUX 	0
#define _MACOS 	0

#define LYNN_WIN64 	_WIN64
#define LYNN_PC 	_PC
#define LYNN_LINUX 	_LINUX
#define LYNN_MACOS 	_MACOS

#define _COMPILER_GCC 		0
#define _COMPILER_MSVC 		1
#define _COMPILER_CLANG 	0

#define LYNN_GCC		_COMPILER_GCC
#define LYNN_MSVC		_COMPILER_MSVC
#define LYNN_CLANG		_COMPILER_CLANG

#define _DEBUG 			1
#define _RELEASE 		0
#define _OPTIMIZED 		0
#define _ASSERT 		1
#define _DEV 			1
#define _DEV_BANK 		1

#define LYNN_DEBUG 				_DEBUG
#define LYNN_RELEASE 			_RELEASE
#define LYNN_OPTIMIZED 			_OPTIMIZED
#define LYNN_ASSERT 			_ASSERT
#define LYNN_DEV 				_DEV
#define LYNN_BANK 				_DEV_BANK
#define LYNN_DEV_BANK 			_DEV_BANK

#endif // __FORCEINCLUDE_WIN64_DEBUG__