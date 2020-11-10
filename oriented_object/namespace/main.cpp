#include <iostream>

#include "player.cpp"

int main()
{
  Game::Player *player = new Game::Player("BeerInjection");
  std::cout << player->getName() << std::endl;
}