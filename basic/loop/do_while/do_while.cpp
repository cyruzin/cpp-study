#include <iostream>

int main()
{
  int i = 1;

  std::cout << "loop with do while..." << std::endl;

  do
  {
    std::cout << "value: " << i << std::endl;
    i++;
  } while (i <= 10);
}
