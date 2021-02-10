#pragma once

#include <string>

class Person
{
public:
  Person();
  Person(std::string name, int age);

  void setName(std::string name);
  std::string getName();
  void setAge(int age);
  int getAge();

protected:
  std::string m_name;
  int m_age;
};