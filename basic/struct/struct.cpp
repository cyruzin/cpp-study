#include <iostream>

struct Person
{
  int age = 18;
};

void setAge(Person &p, int _age)
{
  p.age = _age;
}

void printAge(const Person &p)
{
  std::cout << p.age << std::endl;
}

int main()
{
  Person p;
  printAge(p);
  setAge(p, 23);
  printAge(p);
}