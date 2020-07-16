#pragma once

// Detect memory leaks on Windows
#if defined(_DEBUG) && defined(WIN32)
#define _CRTDBG_MAP_ALLOC
// ReSharper disable once CppUnusedIncludeDirective
#include <stdlib.h>
// ReSharper disable once CppUnusedIncludeDirective
#include <crtdbg.h>
#ifndef DBG_NEW
#define DBG_NEW new ( _NORMAL_BLOCK , __FILE__ , __LINE__ )
#define new DBG_NEW
#endif // DBG_NEW
#undef THIS_FILE
// ReSharper disable once CppDeclaratorNeverUsed
static char THIS_FILE[] = __FILE__;
#endif // defined(_DEBUG) && defined(WIN32)
