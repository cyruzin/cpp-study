#include <iostream>
#include "dog.hpp"

Animal Dog::getInfo()
{
  return animal;
}

void Dog::bark()
{
  std::cout << "Woof! Woof!" << std::endl;
}