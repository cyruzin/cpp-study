#pragma once

#include <iostream>

class MutableExample
{
public:
  const void printAge() const
  {
    m_age = 10;
    std::cout << m_age << std::endl;
  }

private:
  mutable int m_age;
};