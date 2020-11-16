#include <iostream>

#include "../include/Operation.h"

Bank::Operation::Operation(Account &account) : m_account(account)
{
  m_account = account;
}

bool Bank::Operation::setWithdraw(unsigned long int value)
{
  if (!checkAccount())
    return false;

  int current_balance = m_account.getBalance();
  if (current_balance < value)
  {
    std::cout << "Failed to withdraw..." << std::endl;
    return false;
  }
  m_account.setBalance(current_balance -= value);
  return true;
}

void Bank::Operation::setDeposit(unsigned long int value)
{
  if (!checkAccount())
    return;

  m_account.setBalance(m_account.getBalance() + value);
}

unsigned long int Bank::Operation::getBalance()
{
  return m_account.getBalance();
}

bool Bank::Operation::checkAccount()
{
  return m_account.userInfo().getID() == 0 ? false : true;
}