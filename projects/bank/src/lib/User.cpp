#include "../include/All.hpp"

using namespace Bank;

User::User() {}

User::User(std::string name, std::string password)
{
  m_id = rand();
  m_name = name;
  m_password = password;
}

User::~User() {}

void User::setID(unsigned long id)
{
  m_id = id;
}

unsigned long User::getID()
{
  return m_id;
}

void User::setName(std::string name)
{
  m_name = name;
}

std::string User::getName()
{
  return m_name;
}

void User::setPassword(std::string password)
{
  m_password = password;
}

std::string User::getPassword()
{
  return m_password;
}

bool User::validatePassword(std::string password)
{
  if (password.length() < 8)
  {
    std::cout << "Password is too short, min 8 characters" << std::endl;
    return false;
  }

  if (password.length() > 32)
  {
    std::cout << "Password is too long, max 32 characters" << std::endl;
    return false;
  }

  return true;
}

bool User::checkPassword(std::string password)
{
  return password == m_password;
}