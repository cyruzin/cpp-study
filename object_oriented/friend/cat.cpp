#include "cat.h"

Cat::Cat(std::string name, std::string breed)
{
  m_name = name;
  m_breed = breed;
}

std::string Cat::getName()
{
  return m_name;
}

void Cat::setBreed(std::string breed)
{
  m_breed = breed;
}

std::string Cat::getBreed()
{
  return m_breed;
}