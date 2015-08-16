#include <iostream>
#include <string>
using namespace std;

int main()
{
  //Setup
  string leapYear;
  int day, month;
  int total = 0;
  int months[11] = {31,28,31,30,31,30,31,31,30,31,30};
  cout << "Is the year a leap year?\n";
  cin >> leapYear; 
  cout << "Enter month followed by day as numbers:\n";
  cin >> month >> day;

  //Logic
  if ((leapYear == "Yes") || (leapYear == "yes"))
    months[1] = 29;

  for(int i = 0; i < 11; i++) {
    if ((i + 1) < month)
      total += months[i];
  }
  total += day;

  cout << total << endl;

  return 0;
}
