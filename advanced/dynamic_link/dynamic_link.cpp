#include <iostream>

#include "calc_lib.h"

int main()
{
  Calc calc;

  std::cout << calc.sum(10, 10) << std::endl;
  std::cout << calc.multiply(5, 5) << std::endl;

  std::cin.get();
}