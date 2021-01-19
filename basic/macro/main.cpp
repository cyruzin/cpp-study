#include <iostream>

#ifdef __WIN32
const char *CURRENT_PLATFORM = "Windows";
#else
const char *CURRENT_PLATFORM = "another OS";
#endif

#ifndef DEV
#define DEV "Cyro Dubeux"
#endif

// Some predefined macros
//
// __cplusplus
// __DATE__
// _TIME__

int main()
{
  std::cout << DEV << " is developing in " << CURRENT_PLATFORM << std::endl;
  std::cout << "On " << __DATE__ << " " << __TIME__ << std::endl;
}