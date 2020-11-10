#include <iostream>

int main()
{
  int *p = new int(25); // allocating int var

  std::cout << *p << std::endl;

  delete p; // cleanup

  int *q = new int[5]; // allocating array

  q[0] = 154;
  q[1] = 231;
  q[2] = 133;
  q[3] = 43;
  q[4] = 899;
  q[5] = 55;
  q[6] = 155; // auto realloc

  for (int i = 0; i <= 6; i++)
  {
    std::cout << q[i] << std::endl;
  }

  delete[] p; // cleanup
}