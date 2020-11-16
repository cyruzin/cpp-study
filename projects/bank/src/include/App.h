#pragma once

#include <string>
#include <vector>

#include "Account.h"
#include "Operation.h"
namespace Bank
{
  class App
  {
  public:
    App();
    App(Account &account);
    void init();
    void create();
    void manage();
    void manageSub(int userID);
    void destroy();
    void setAccount(Account &account);
    std::vector<Account> &getAccounts();

  private:
    Account m_account;

    std::vector<Account> m_accountList;
  };

} // namespace Bank