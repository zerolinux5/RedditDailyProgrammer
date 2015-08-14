#include <iostream>

using namespace std;

int main ()
{
  int i = 99;
  while (i > 0) {
    cout << i << " bottles of beer on the wall," <<
            i << " bottle of beer." << endl <<
            "Take one down and pass it around, " << (--i) <<
            " bottles of beer on the wall.\n";
  }

  return 0;
}
