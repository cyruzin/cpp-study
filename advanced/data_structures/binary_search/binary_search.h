#pragma once

class DataStructure
{
public:
  DataStructure();
  /** 
   * Search a sorted array by repeatedly dividing the search 
   * interval in half. The idea of binary search is to use 
   * the information that the array is sorted and reduce 
   * the time complexity to O(Log n).
   * 
   * @param arr Sorted array of int.
   * @param key The int key to search in the array.
   * @param size The size of the array.
   **/
  int binarySearch(int arr[], int key, int size);
};