#pragma once

#include "animal.cpp"

class Dog : public Animal
{
public:
  Dog(std::string name, std::string breed, float weight)
      : Animal(name, breed, weight) {}
  Dog();
  void bark();
};