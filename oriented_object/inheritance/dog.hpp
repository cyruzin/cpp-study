#pragma once

#include "animal.cpp"

class Dog : public Animal
{
public:
  Dog(std::string _name, std::string _breed, float _weight)
      : Animal(_name, _breed, _weight)
  {
  }
  Dog();
  void bark();
};