#pragma once

#include <string>

namespace Game
{

  class Player
  {
  public:
    Player();
    Player(std::string name);
    void setName(std::string name);
    std::string getName();

  private:
    std::string m_name;
  };

} // namespace Game