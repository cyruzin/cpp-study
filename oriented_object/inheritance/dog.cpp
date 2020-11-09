#include <iostream>
#include <string>
#include "dog.hpp"

Dog::Dog() {}

void Dog::bark()
{
  std::cout << "Woof! Woof!" << std::endl;
}