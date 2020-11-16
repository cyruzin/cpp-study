#pragma once

#include <string>
#include <vector>

#include "User.h"

namespace Bank
{

  class App
  {
  public:
    void init();
    void create();
    void setUser(User &user);
    int getUsersSize();

  private:
    std::vector<User> m_userList;
  };

} // namespace Bank