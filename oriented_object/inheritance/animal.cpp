#include <string>
#include "animal.hpp"

Animal::Animal() {}

Animal::Animal(std::string _name, std::string _breed, float _weight)
{
  name = _name;
  breed = _breed;
  weight = _weight;
}

void Animal::setName(std::string _name)
{
  name = _name;
}

std::string Animal::getName()
{
  return name;
}

void Animal::setBreed(std::string _breed)
{
  breed = _breed;
}

std::string Animal::getBreed()
{
  return breed;
}

void Animal::setWeight(float _weight)
{
  weight = _weight;
}

float Animal::getWeight()
{
  return weight;
}