#include <cstdlib>

#include "../include/Account.h"

using namespace Bank;

Account::Account()
{
  m_balance = 0;
}

Account::Account(User &user) : m_user(user)
{
  m_branch = rand();
  m_checking_account = rand();
  m_user = user;
  m_balance = 0;
}

void Account::setBalance(unsigned long balance)
{
  m_balance = balance;
}

unsigned long Account::getBalance()
{
  return m_balance;
}

unsigned long Account::getBranch()
{
  return m_branch;
}

unsigned long Account::getCheckingAccount()
{
  return m_checking_account;
}

User Account::userInfo()
{
  return m_user;
}