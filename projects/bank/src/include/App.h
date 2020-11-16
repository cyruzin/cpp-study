#pragma once

#include <string>
#include <vector>

#include "Account.h"
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
    void setAccount(Account &account, std::vector<Account> &accountList);
    std::vector<Account> &getAccounts();

  private:
    Account m_account;

    std::vector<Account> m_accountList;
  };

} // namespace Bank