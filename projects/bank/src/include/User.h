#pragma once

#include <string>

namespace Bank
{

  class User
  {
  public:
    User();
    User(std::string name, std::string password);
    void setName(std::string name);
    std::string getName();
    void setPassword(std::string password);
    std::string getPassword();
    bool validatePassword(std::string password);
    void setID(unsigned long id);
    unsigned long int getID();
    void setActive(bool active);

  private:
    unsigned long int m_id;
    std::string m_name, m_password;
    bool m_active;

    bool checkPassword(std::string password);
  };

} // namespace Bank