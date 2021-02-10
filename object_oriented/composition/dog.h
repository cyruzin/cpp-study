#pragma once

#include "animal.cpp"

class Dog
{
public:
  Dog(Animal animal);
  void getInfo();
  void bark();

private:
  Animal m_animal;
};