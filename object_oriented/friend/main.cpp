#include <iostream>

#include "cat.cpp"

void setName(Cat &cat)
{
  cat.m_name = "Nails";
}

int main()
{
  Cat cat("Eek", "Whiska");
  std::cout << cat.getName() << std::endl;
  setName(cat);
  std::cout << cat.getName() << std::endl;
}
