#include <iostream>

template <typename T>
class Log
{
public:
  void printLog(T value)
  {
    std::cout << value << std::endl;
  }
};