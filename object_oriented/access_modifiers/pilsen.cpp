#include <iostream>

#include "pilsen.h"

Pilsen::Pilsen() {}

void Pilsen::getPilsenInfo()
{
  std::cout << m_price << std::endl; // protect variable from beer
}