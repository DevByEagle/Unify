#pragma once

#ifdef UNIFY_PLATFORM_WINDOWS
#ifdef UNIFY_BUILD_DLL
#define UNIFY_API __declspec(dllexport)
#else
#define UNIFY_API __declspec(dllimport)
#endif
#else
#define UNIFY_API
#error Unify only support Windows!
#endif