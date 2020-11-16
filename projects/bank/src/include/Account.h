#pragma once

#include <string>

#include "User.h"

namespace Bank
{

  class Account
  {
  public:
    Account();
    Account(User &user);

    void setBalance(unsigned long int balance);
    unsigned long int getBalance();
    unsigned long int getBranch();
    unsigned long int getCheckingAccount();
    Bank::User userInfo();

  private:
    unsigned long int m_branch, m_checking_account, m_balance;
    User m_user;
  };

} // namespace Bank