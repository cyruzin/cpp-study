#include <functional>
#include <string>
#include <iostream>

// passing a function as parameter to another function
void printMessage(std::string message, std::function<void(std::string message)> function)
{
  function(message);
}

int main()
{
  // basic lambda
  []() {
    std::cout << "This is a lambda" << std::endl;
  }();

  // closures
  auto sum = [](int a, int b) -> int {
    return a + b;
  };

  std::cout << sum(10, 10) << std::endl;

  auto myMessage1 = [](std::string message) {
    std::cout << message << std::endl;
  };

  auto myMessage2 = [](std::string message) {
    std::cout << "[" << __TIME__ << "] " << message << std::endl;
  };

  // passing closures as parameter
  printMessage("Hello from lambda", myMessage1);
  printMessage("Hello from lambda 2 with time", myMessage2);

  // Capture Clause
  //
  // https://docs.microsoft.com/en-us/cpp/cpp/lambda-expressions-in-cpp?view=msvc-160#capture-clause
  //
  // [&total, factor]
  // [factor, &total]
  // [&, factor]
  // [factor, &]
  // [=, &total]
  // [&total, =]

  int age = 33;
  const int minAge = 18;

  auto printMyAge = [age](int minAge) -> void {
    if (age >= minAge)
    {
      std::cout << "Welcome!" << std::endl;
    }
    else
    {
      std::cout << "Not yet my man!" << std::endl;
    }
  };

  printMyAge(minAge);
}