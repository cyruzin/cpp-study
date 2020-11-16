#pragma once

#include "Account.h"

namespace Bank
{

  class Operation
  {
  public:
    Operation();
    Operation(Account &account);
    bool setWithdraw(unsigned long int value);
    void setDeposit(unsigned long int value);
    unsigned long int getBalance();

  private:
    Account m_account;
  };

} // namespace Bank