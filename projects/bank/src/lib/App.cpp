#include <iostream>
#include <string>

#include "../include/App.h"

using namespace std;
using namespace Bank;

void App::init()
{
  int option;

  cout << "Bank Menu" << endl;
  cout << "1 - Manage Account" << endl;
  cout << "2 - Create Account" << endl;
  cout << "3 - Destroy Account" << endl;
  cout << "4 - Exit the program" << endl;
  cin >> option;

  switch (option)
  {
  case 2:
    create();
    break;

  case 4:
    break;

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

  User user(name, password);
  setUser(user);
  init();
}

void App::setUser(User &user)
{
  m_userList.push_back(user);
}

int App::getUsersSize()
{
  return m_userList.size();
}