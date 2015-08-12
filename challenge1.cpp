#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
  string name, username, response;
  int age;
  ofstream outputfile;
  cout << "Enter your name, age, and username:";
  cin >> name >> age >> username;
  response = "Your name is " + name +
          ", you are " + to_string(age) +
           " years old, and your username is " +
           username + "\n";
  cout << response;

  //Output to file
  outputfile.open ("c1.txt");
  outputfile << response;
  outputfile.close();

  return 0;
}
