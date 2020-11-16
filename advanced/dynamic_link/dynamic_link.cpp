#include <iostream>

#include "calc.h"

int main()
{
  Calc::Math math;

  std::cout << math.sum(10, 10) << std::endl;
  std::cout << math.multiply(5, 5) << std::endl;

  std::cin.get();
}