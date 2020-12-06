#include <iostream>
#include <string>

#include "overload.h"

using namespace std;

void PrintData::print(int i)
{
  cout << "Printing int: " << i << endl;
}
void PrintData::print(double f)
{
  cout << "Printing float: " << f << endl;
}
void PrintData::print(std::string s)
{
  cout << "Printing char: " << s << endl;
}
