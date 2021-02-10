#include "beer.h"

Beer::Beer() {}

Beer::Beer(
    std::string name,
    std::string brand,
    BeerType type,
    double price)
{
  m_name = name;
  m_brand = brand;
  m_type = type;
  m_price = price;
}

uint64_t Beer::getID()
{
  return m_id;
}

void Beer::setName(std::string name)
{
  m_name = name;
}

std::string Beer::getName()
{
  return m_name;
}

void Beer::setBrand(std::string brand)
{
  m_brand = brand;
}

std::string Beer::getBrand()
{
  return m_brand;
}

void Beer::setType(BeerType type)
{
  m_type = type;
}

BeerType Beer::getType()
{
  return m_type;
}

void Beer::setPrice(double price)
{
  m_price = price;
}

double Beer::getPrice()
{
  return m_price;
}