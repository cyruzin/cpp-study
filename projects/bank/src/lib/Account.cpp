#include "../include/All.hpp"

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

Account::~Account() {}

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
  double balanceWithFee = m_balance - 2; // withdraw fee

  if (balanceWithFee < value) // preventing negatives value
  {
    std::cout << "Failed to withdraw..." << std::endl;
    return false;
  }
  m_balance = balanceWithFee - value;
  return true;
}

void Account::setDeposit(double value)
{
  double newValue = value; // preventig mutation

  if (value >= 250)
  {
    double bonus = (value / 250) * 5; // calculating bonus
    newValue += bonus;
  }

  m_balance += newValue;
}
