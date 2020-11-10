#include <iostream>

#define WIDTH 3
#define HEIGHT 3

int main()
{
  int foo[5];
  int bar[5] = {20, 30, 40, 50, 60};    // initializing array
  int foo_bar[] = {60, 50, 40, 30, 20}; // dynamic

  int team[HEIGHT][WIDTH];

  int i, j, num;

  for (i = 0; i < HEIGHT; i++)
    for (j = 0; j < WIDTH; j++)
    {
      std::cout << "type a number: ";
      std::cin >> num;

      team[i][j] = num;
    }

  std::cout << "results: " << std::endl;

  for (i = 0; i < HEIGHT; i++)
    for (j = 0; j < WIDTH; j++)
    {
      printf("element[%d][%d] = %d\n", i, j, team[i][j]);
    }
}