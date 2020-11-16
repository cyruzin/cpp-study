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
    void createAccount(User &user);
    void manageAccount(std::string name, std::string password);
    void destroyAccount();
    bool getAccountStatus();

    void setBalance(unsigned long int balance);
    unsigned long int getBalance();
    unsigned long int getBranch();
    unsigned long int getCheckingAccount();
    Bank::User userInfo();

  private:
    unsigned long int m_branch, m_checking_account, m_balance;
    bool m_status;
    User m_user;
  };

} // namespace Bank