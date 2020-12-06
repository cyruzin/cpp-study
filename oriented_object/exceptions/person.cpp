#include <string>

#include "person.h"

Person::Person(std::string name, int age) {
  m_name = name;
  m_age = age;
}

void Person::setName(std::string name)
{
  m_name = name;
}

std::string Person::getName()
{
  return m_name;
}

void Person::setAge(int age)
{
  m_age = age;
}

int Person::getAge()
{
  return m_age;
}