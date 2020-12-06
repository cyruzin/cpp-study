#include <iostream>

#include "person.cpp"

using namespace std;

int main()
{
  Person *johnDoe = new Person("John Doe", 17);

  try
  {
    if (johnDoe->getAge() > 18)
    {
      cout << "Access granted - you are old enough." << endl;
    }
    else
    {
      throw(johnDoe->getAge());
    }
  }
  catch (int ageExcepction)
  {
    cout << "Access denied - You must be at least 18 years old." << endl;
    cout << "Age is: " << ageExcepction;
  }
}