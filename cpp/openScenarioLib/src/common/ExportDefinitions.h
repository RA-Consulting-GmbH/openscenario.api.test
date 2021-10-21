#pragma once

#ifdef _WIN32
#   ifdef EXPORT_OPENSCENARIOLIB
#       define OPENSCENARIOLIB_EXP __declspec(dllexport)
#       pragma message( "OpenScenarioLib: exporting symbols (dllexport)" )
#   elif defined(OSC_STATIC)
#       define OPENSCENARIOLIB_EXP
#       pragma message( "OpenScenarioLib: static" )
#   else
#       define OPENSCENARIOLIB_EXP __declspec(dllimport)
#       pragma message( "OpenScenarioLib: importing symbols (dllimport)" )
#   endif
#elif defined(__unix__) && defined(__linux__)
#   if  __GNUC__ >= 4
#       define OPENSCENARIOLIB_EXP __attribute__((visibility("default")))
#   else
#       define OPENSCENARIOLIB_EXP
#   endif
#elif defined(__APPLE__)
#   define OPENSCENARIOLIB_EXP
#else
#   error "OPENSCENARIOLIB: Operating system not supported."
#endif // _WIN32
