#include <iostream>
#include <thread>
#include <chrono>

static bool s_Finished = false;

void doWork()
{
  while (!s_Finished)
  {
    std::cout << "Working..." << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(2000));
  }
}

int main()
{
  std::thread worker(doWork);

  std::cin.get();

  s_Finished = true;

  worker.join();

  std::cin.get();
}