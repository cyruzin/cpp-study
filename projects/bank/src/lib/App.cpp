#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

#include "../include/App.h"

using namespace std;
using namespace Bank;

App::App() {}

App::App(Account &account) : m_account(account) {}

void App::init()
{
  int option;

  cout << "Welcome to Banking Program main menu!" << endl;
  cout << "Please select one of the following options:" << endl;

  if (m_accountList.size() > 0)
    cout << "1 - Manage Account" << endl;
  cout << "2 - Create Account" << endl;
  if (m_accountList.size() > 0)
    cout << "3 - Destroy Account" << endl;
  cout << "4 - Exit the program" << endl;
  cin >> option;

  switch (option)
  {
  case 1:
    manage();
  case 2:
    create();
    break;
  case 3:
    destroy();
  case 4:
    exit(EXIT_SUCCESS);
  default:
    break;
  }
}

void App::create()
{
  string name, password;

  cout << "To create an account, please provide a name and password." << endl;
  cout << "The password should be 8 to 32 characters long." << endl;
  cout << "New username: " << endl;
  cin >> name;
  cout << "New password: " << endl;
  cin >> password;

  User *user = new User(name, password);

  if (!user->validatePassword(password))
  {
    return init();
  }

  Account *account = new Account(*user);
  setAccount(*account, m_accountList);

  cout << "Create account #" << account->userInfo().getID() << endl;

  return init();
}

void App::manage()
{
  int accountID;
  string password;

  cout << "Enter account ID: " << endl;
  cin >> accountID;

  auto it = find_if(
      m_accountList.begin(),
      m_accountList.end(),
      [&accountID](Account &account) {
        return account.userInfo().getID() == accountID;
      });

  if (!(it != m_accountList.end()))
  {
    cout << "Account #" << accountID << " not found" << endl;
    return manage();
  }

  cout << "Enter account #" << accountID << " password:" << endl;
  cin >> password;

  if (!m_account.userInfo().validatePassword(password))
  {
    std::cout << "Invalid password" << std::endl;
    return init();
  }

  return manageSub(accountID);
}

void App::manageSub(int userID)
{
  int option;
  double amount;

  cout << "1 - Display balance" << endl;
  cout << "2 - Deposit funds" << endl;
  cout << "3 - Withdraw funds" << endl;
  cout << "4 - Go to main menu" << endl;
  cin >> option;

  switch (option)
  {
  case 1:
    for (auto &currentAccount : m_accountList)
    {
      if (currentAccount.userInfo().getID() == userID)
      {
        cout.precision(2);
        cout << "Account balance: $" << fixed << currentAccount.getBalance() << endl;
      }
    }
    manageSub(userID);
    break;
  case 2:
    cout << "Deposit amount: $";
    cin >> amount;
    for (auto &currentAccount : m_accountList)
    {
      if (currentAccount.userInfo().getID() == userID)
      {
        currentAccount.setDeposit(amount);
        cout << "Depositing $" << amount << "..." << endl;
      }
    }
    manageSub(userID);
    break;
  case 3:
    cout << "Withdraw amount: $";
    cin >> amount;
    for (auto &currentAccount : m_accountList)
    {
      if (currentAccount.userInfo().getID() == userID)
      {
        if (currentAccount.setWithdraw(amount))
          cout << "Withdrawing $" << amount << "..." << endl;
      }
    }
    manageSub(userID);
    break;
  case 4:
    init();
    break;
  default:
    init();
    break;
  }
}

void App::destroy()
{
  int accountID;
  string password;

  cout << "Enter account ID: " << endl;
  cin >> accountID;

  auto it = find_if(
      m_accountList.begin(),
      m_accountList.end(),
      [&accountID](Account &account) {
        return account.userInfo().getID() == accountID;
      });

  if (!(it != m_accountList.end()))
  {
    cout << "Account not found" << endl;
    return init();
  }

  cout << "Enter account #" << accountID << " password:" << endl;
  cin >> password;

  if (!m_account.userInfo().validatePassword(password))
  {
    std::cout << "Invalid password" << std::endl;
    return init();
  }

  auto index = distance(m_accountList.begin(), it);
  m_accountList.erase(m_accountList.begin() + index);
  cout << "Destroying account..." << endl;
  return init();
}

void App::setAccount(Account &account, std::vector<Account> &accountList)
{
  accountList.push_back(account);
}

vector<Account> &App::getAccounts()
{
  return m_accountList;
}