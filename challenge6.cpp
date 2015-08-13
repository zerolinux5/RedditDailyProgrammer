#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  long double long_pi = 0L;
  double sign = -1.0;
  for (double i = 1; i < 10000000000; i +=2) {
    long_pi += ((sign *= -1)*(4.0/i));
  }
  cout << setprecision(30) << long_pi;
  return 0;
}
