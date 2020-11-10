#pragma once

#include <iostream>
#include <string>

class Cat
{
public:
  Cat();
  Cat(std::string name, std::string breed);
  friend void setName(Cat &cat);
  std::string getName();
  void setBreed(std::string breed);
  std::string getBreed();

private:
  std::string m_name, m_breed;
};