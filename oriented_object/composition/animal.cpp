#include <string>

#include "animal.h"

Animal::Animal() {}

Animal::Animal(std::string name, std::string breed, float weight)
{
  m_name = name;
  m_breed = breed;
  m_weight = weight;
}

void Animal::setName(std::string name)
{
  m_name = name;
}

std::string Animal::getName()
{
  return m_name;
}

void Animal::setBreed(std::string breed)
{
  m_breed = breed;
}

std::string Animal::getBreed()
{
  return m_breed;
}

void Animal::setWeight(float weight)
{
  m_weight = weight;
}

float Animal::getWeight()
{
  return m_weight;
}
