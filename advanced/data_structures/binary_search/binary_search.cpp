#include "binary_search.h"

DataStructure::DataStructure() {}

int DataStructure::binarySearch(int arr[], int key, int size)
{
  int leftSide = 0;
  int rightSide = size - 1;
  int middle;

  while (leftSide <= rightSide)
  {
    middle = (leftSide + rightSide) / 2;

    if (arr[middle] == key)
      return middle;

    if (key < arr[middle])
      rightSide = middle - 1;
    else
      leftSide = middle + 1;
  }

  return -1;
}