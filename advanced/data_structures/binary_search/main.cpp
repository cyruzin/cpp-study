#include <iostream>

#include "binary_search.cpp"

int main()
{
  int numbers[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  DataStructure *ds = new DataStructure();

  std::cout << ds->binarySearch(numbers, 6, 10) << std::endl;

  return 0;
}