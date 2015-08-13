#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main ()
{
  string name, password, a_name, a_password;
  ifstream login ("easy.txt");
  cout << "Enter username followed by password:\n";
  cin >> name >> password;

  if (login.is_open())
  {
    getline(login, a_name);
    getline(login, a_password);
    if (name == a_name && password == a_password)
      cout << "Access granted.\n";
    else
      cout << "Nope.\n";
    login.close();
  }

  return 0;
}
