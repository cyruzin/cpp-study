#include "iostream"

#ifndef SAY_MY_NAME
#define SAY_MY_NAME "Heisenberg"
#endif

// Compile with macro:
// g++ -o saymyname -DSAY_MY_NAME saymyname.cpp

// Compile without macro:
// g++ -o saymyname saymyname.cpp

int main()
{
  std::cout << SAY_MY_NAME << std::endl;

#ifdef DEBUG
  std::cout << "Debug mode" << std::endl;
#endif
}