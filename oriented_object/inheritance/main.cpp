#include "dog.cpp"

int main()
{
  Dog dog("Sissi", "Shih-tzu", 11.021);
  std::cout << dog.getName() << std::endl;
  std::cout << dog.getBreed() << std::endl;
  std::cout << dog.getWeight() << std::endl;

  Dog dog2;
  dog2.setName("Pandora");
  dog2.setBreed("Bulldog");
  dog2.setWeight(66.1387);
  dog.bark();
  std::cout << dog2.getName() << std::endl;
  std::cout << dog2.getBreed() << std::endl;
  std::cout << dog2.getWeight() << std::endl;

  Animal animal("Bradley", "Wolf", 45.230);
  std::cout << animal.getName() << std::endl;
  std::cout << animal.getBreed() << std::endl;
  std::cout << animal.getWeight() << std::endl;
}