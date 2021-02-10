#pragma once

#include <string>

#include "beer.cpp"

class Pilsen : public Beer
{
public:
  Pilsen();
  Pilsen(
      std::string name,
      std::string brand,
      BeerType type,
      double price) : Beer(name, brand, type, price)
  {
  }

  void getPilsenInfo();
};