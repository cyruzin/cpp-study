#include <string>

#include "log.cpp"

int main()
{
  Log<int> log;
  Log<std::string> logS;

  log.printLog(5);
  logS.printLog("Hello from template!");
}