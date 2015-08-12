#include <iostream>
#include <string>
using namespace std;

int choices ()
{
  int choice;
  cout << "Enter which variable is needed:\n" <<
          "1:Force\n2:Mass\n3:Acceleration\n";
  cin >> choice;
  return (choice > 0 && choice < 4) ? choice : 0;
}

int main ()
{
 int response, var1, var2;
 while ((response = choices()) == 0)
 {
 }
 switch (response) {
   case 1:
     cout << "Enter acceleration and mass: ";
     cin >> var1 >> var2;
     cout << "Force:" << var1 * var2 << endl;
     break;
   case 2:
     cout << "Enter acceleration and force: ";
     cin >> var1 >> var2;
     cout << "Mass:" << var2 / var1 << endl;
     break;
   case 3:
     cout << "Enter force and mass: ";
     cin >> var1 >> var2;
     cout << "Acceleration:" << var1 / var2 << endl;
     break;
   default:
     cout << "Shouldn't be here\n.";
     break;
 }
  return 0;
}
