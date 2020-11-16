#include <cstdlib>

#include "../include/Account.h"

Bank::Account::Account(User &user) : m_user(user)
{
  m_branch = rand();
  m_checking_account = rand();
  m_user = user;
}

void Bank::Account::createAccount(User &user)
{
  m_user = user;
}

void Bank::Account::manageAccount(std::string name, std::string password)
{
  m_user.setName(name);
  m_user.setPassword(password);
}

void Bank::Account::destroyAccount()
{
  m_user.setActive(false);
  m_status = true;
}

bool Bank::Account::getAccountStatus()
{
  return m_status;
}

void Bank::Account::setBalance(unsigned long balance)
{
  m_balance = balance;
}

unsigned long Bank::Account::getBalance()
{
  return m_balance;
}

unsigned long Bank::Account::getBranch()
{
  return m_branch;
}

unsigned long Bank::Account::getCheckingAccount()
{
  return m_checking_account;
}

Bank::User Bank::Account::userInfo()
{
  return m_user;
}