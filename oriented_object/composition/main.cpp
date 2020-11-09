#include "dog.cpp"

int main()
{
  Animal animal("Bradley", "Wolf", 45.230);

  Dog dog(animal);
  dog.bark();
  dog.getInfo();
}