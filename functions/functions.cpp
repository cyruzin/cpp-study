#include <iostream>

int sum(int a, int b)
{
  return a + b;
}

int main()
{
  std::cout << "The sum is: " << sum(5, 5) << std::endl;
  return 0;
}