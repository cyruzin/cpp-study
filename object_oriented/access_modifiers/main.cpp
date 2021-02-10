#include "pilsen.cpp"

int main()
{
  Pilsen *artesenalBeer = new Pilsen("Sunstrike", "Sunstrike Corp", BeerType::PILSEN, 10.99);
  artesenalBeer->getPilsenInfo(); // showing the value of the protected variable
}