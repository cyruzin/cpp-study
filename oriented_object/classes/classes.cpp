#include <iostream>

class Player
{
public:
  int x, y;
  int speed;

  void Move(int xa, int ya)
  {
    x += xa * speed;
    y += ya * speed;
  }
};

int main()
{
  Player player;
  std::cout << "Moving player..." << std::endl;
  player.Move(1, -1);

  return 0;
}