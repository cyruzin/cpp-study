#include <iostream>

#include "../include/Operation.h"

using namespace Bank;

Operation::Operation() {}

Operation::Operation(Account &account) : m_account(account) {}

bool Operation::setWithdraw(unsigned long int value)
{
  unsigned long int currentBalance = m_account.getBalance();
  if (currentBalance < value)
  {
    std::cout << "Failed to withdraw..." << std::endl;
    return false;
  }
  m_account.setBalance(currentBalance -= value);
  return true;
}

void Operation::setDeposit(unsigned long int value)
{
  unsigned long int currentBalance = m_account.getBalance();
  m_account.setBalance(currentBalance += value);
}

unsigned long int Operation::getBalance()
{
  return m_account.getBalance();
}