#pragma once

#include "animal.cpp"

class Dog
{
private:
  Animal animal;

public:
  Dog(const Animal &_animal) : animal{_animal} {}
  Dog();
  Animal getInfo();
  void bark();
};