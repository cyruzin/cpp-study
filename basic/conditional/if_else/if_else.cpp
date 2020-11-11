#include <iostream>

int main()
{
  int age;

  std::cout << "Checking age: ";
  std::cin >> age;

  if (age < 18)
    std::cout << "Under 18" << std::endl;
  else if (age == 18)
    std::cout << "Equal to 18" << std::endl;
  else
    std::cout << "Greater than 18" << std::endl;

  // short hand
  age >= 50 ? std::cout << "Experienced!" << std::endl
            : std::cout << "Not experienced enough!" << std::endl;
}