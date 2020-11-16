#include <iostream>

#include "../include/Account.h"

using namespace Bank;

Account::Account()
{
  m_balance = 0;
}

Account::Account(User &user) : m_user(user)
{
  m_user = user;
  m_balance = 0;
}

double Account::getBalance()
{
  return m_balance;
}

User Account::userInfo()
{
  return m_user;
}

bool Account::setWithdraw(double value)
{
  if (m_balance < value)
  {
    std::cout << "Failed to withdraw..." << std::endl;
    return false;
  }
  m_balance = m_balance -= value;
  return true;
}

void Account::setDeposit(double value)
{
  m_balance = m_balance += value;
}
