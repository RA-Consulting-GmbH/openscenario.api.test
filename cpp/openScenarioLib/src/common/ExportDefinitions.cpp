//TODO: why?
#ifdef _WINDOWS
# ifdef EXPORT_OPENSCENARIOLIB
#  define OPENSCENARIOLIB_EXP __declspec(dllexport)
#  pragma message( "OPENSCENARIOLIB: dllexport defined" )
# else
#  define OPENSCENARIOLIB_EXP // __declspec(dllimport)
#  pragma message( "OPENSCENARIOLIB: dllexport skipped" )
# endif
#elif defined(__unix__) && defined(__linux__)
# define OPENSCENARIOLIB_EXP
#elif defined(__APPLE__)
# define OPENSCENARIOLIB_EXP
#else
# error "OPENSCENARIOLIB: Operating system not supported."
#endif // _WINDOWS
