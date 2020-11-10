#include <iostream>

#include "dog.h"

Dog::Dog(Animal animal) : m_animal(animal) {}

void Dog::getInfo()
{
  std::cout << m_animal.getName() << std::endl;
  std::cout << m_animal.getBreed() << std::endl;
  std::cout << m_animal.getWeight() << std::endl;
}

void Dog::bark()
{
  std::cout << "Woof! Woof!" << std::endl;
}