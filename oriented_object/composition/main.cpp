#include <iostream>
#include "dog.cpp"

int main()
{
  Animal animal("Bradley", "Wolf", 45.230);

  Dog dog(animal);
  dog.bark();

  std::cout << dog.getInfo().getName() << std::endl;
  std::cout << dog.getInfo().getBreed() << std::endl;
  std::cout << dog.getInfo().getWeight() << std::endl;
}