#include "All.hpp"

namespace Bank
{

  class Account
  {
  public:
    Account();
    Account(User &user);

    void setDeposit(double value);
    bool setWithdraw(double value);
    double getBalance();

    User userInfo();

  private:
    double m_balance;

    User m_user;
  };

} // namespace Bank