#include <iostream>

int main()
{
  int number = 10;
  int *pNumber = &number;

  std::cout << "Value: " << *pNumber << std::endl;
  std::cout << "Memory address: " << pNumber << std::endl;
  std::cout << "Changing the value in the pointer..." << std::endl;
  *pNumber = 20;
  std::cout << "New value: " << *pNumber << std::endl;
  std::cout << "Same memory address: " << pNumber << std::endl;
}