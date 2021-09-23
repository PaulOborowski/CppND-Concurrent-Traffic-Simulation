#ifdef DEBUG_BUILD //#define DEBUG_BUILD is handled by call of "make debug"
#include <iostream>
#define DEBUG(x)                                                               \
  do {                                                                         \
    std::cerr << x << std::endl;                                               \
  } while (0)
#define DEBUGPRINTVAL(x)                                                       \
  do {                                                                         \
    std::cerr << "File: " << __FILE__ << "\nLine: " << __LINE__                \
              << " Variable **" << (#x) << "** value **" << x << "**"          \
              << std::endl;                                                    \
  } while (0)
#else
#define DEBUG(x)                                                               \
  do {                                                                         \
  } while (0)
#define DEBUGPRINTVAL(x)                                                       \
  do {                                                                         \
  } while (0)
#endif