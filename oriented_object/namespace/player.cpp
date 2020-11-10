#include <string>

#include "player.h"

Game::Player::Player(std::string name)
{
  m_name = name;
}

void Game::Player::setName(std::string name)
{
  m_name = name;
}

std::string Game::Player::getName()
{
  return m_name;
}