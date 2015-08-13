#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
  int count, size;
  srand (time(NULL));

  cout << "Enter number of passwords to enter followed by size:\n";
  cin >> count >> size;

  //Iterate through num and size printing out ascii value characters
  for (int i = 0; i < count; i++) {
    cout << i << ": ";
    for(int j = 0; j < size; j++){
      cout << (char)(rand() % 74 + 47);
    }
    cout << endl;
  }
  return 0;
}
