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

void Account::createAccount(User &user)
{
  m_user = user;
}

void Account::manageAccount(std::string name, std::string password)
{
  m_user.setName(name);
  m_user.setPassword(password);
}

void Account::destroyAccount()
{
  m_user.setActive(false);
  m_status = true;
}

bool Account::getAccountStatus()
{
  return m_status;
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