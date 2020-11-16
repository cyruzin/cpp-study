#include <iostream>
#include <string>

#include "../include/User.h"

Bank::User::User(
    unsigned long int id,
    std::string name,
    std::string password)
{
  if (!validatePassword(password))
    return;

  m_id = id;
  m_name = name;
  m_password = password;
}

void Bank::User::setID(unsigned long id)
{
  m_id = id;
}

unsigned long Bank::User::getID()
{
  return m_id;
}

void Bank::User::setName(std::string name)
{
  m_name = name;
}

std::string Bank::User::getName()
{
  return m_name;
}

void Bank::User::setPassword(std::string password)
{
  m_password = password;
}

std::string Bank::User::getPassword()
{
  return m_password;
}

bool Bank::User::validatePassword(std::string password)
{
  if (password.length() < 8)
  {
    std::cout << "Password is to short, min 8 characters" << std::endl;
    return false;
  }

  if (password.length() > 32)
  {
    std::cout << "Password is to long, max 32 characters" << std::endl;
    return false;
  }

  return true;
}

void Bank::User::setActive(bool active)
{
  m_active = active;
}