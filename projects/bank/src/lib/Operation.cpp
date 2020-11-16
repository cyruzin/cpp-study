#include <iostream>

#include "../include/Operation.h"

using namespace Bank;

Operation::Operation(Account &account) : m_account(account)
{
  m_account = account;
}

bool Operation::setWithdraw(unsigned long int value)
{
  if (!checkAccount())
    return false;

  unsigned long int current_balance = m_account.getBalance();
  if (current_balance < value)
  {
    std::cout << "Failed to withdraw..." << std::endl;
    return false;
  }
  m_account.setBalance(current_balance -= value);
  return true;
}

void Operation::setDeposit(unsigned long int value)
{
  if (!checkAccount())
    return;

  m_account.setBalance(m_account.getBalance() + value);
}

unsigned long int Operation::getBalance()
{
  return m_account.getBalance();
}

bool Operation::checkAccount()
{
  return m_account.userInfo().getID() == 0 ? false : true;
}