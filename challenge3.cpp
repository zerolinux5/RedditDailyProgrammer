#include <iostream>
#include <string>

using namespace std;

void cipher (char &old)
{
  int newNum;
  newNum = (old > 96) ? (old - 96) : (old - 64);
  if ((newNum += 5) > 26)
    newNum -= 26;
  old = newNum + ((old > 96) ? 96 : 64);
}

void decipher (char &old)
{
  int newNum;
  newNum = (old > 96) ? (old - 96) : (old - 64);
  if ((newNum -= 5) < 1)
    newNum += 26;
  old = newNum + ((old > 96) ? 96 : 64);
}

int main ()
{
  string text;
  cout << "Enter text to cipher:\n";
  cin >> text;

  for (int i = 0; i < text.length(); i++) {
    cipher(text[i]);
  }
  cout << text << endl;
  for (int i = 0; i < text.length(); i++) {
    decipher(text[i]);
  }
  cout << text << endl;
  return 0;
}
