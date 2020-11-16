#include <iostream>
#include <string>

#include "lib/User.cpp"
#include "lib/Account.cpp"
#include "lib/Operation.cpp"

int main()
{
  std::string name, password;

  std::cout << "New Bank Account" << std::endl;
  std::cout << "Name: ";
  std::cin >> name;
  std::cout << "Password: ";
  std::cin >> password;

  Bank::User *user = new Bank::User(1, name, password);
  Bank::Account *account = new Bank::Account(*user);
  Bank::Operation *operation = new Bank::Operation(*account);

  std::cout << "User ID: " << account->userInfo().getID() << std::endl;
  std::cout << "User Name: " << account->userInfo().getName() << std::endl;
  std::cout << "Balance: $" << operation->getBalance() << std::endl;
  std::cout << "Depositing $100..." << std::endl;
  operation->setDeposit(100);
  std::cout << "Balance: " << operation->getBalance() << std::endl;
  std::cout << "Withdrawing $75..." << std::endl;
  operation->setWithdraw(75);
  std::cout << "Balance: $" << operation->getBalance() << std::endl;
  account->destroyAccount();
  std::cout << "Destroying account..." << std::endl;
  std::cout << "Account status: " << account->getAccountStatus() << std::endl;

}