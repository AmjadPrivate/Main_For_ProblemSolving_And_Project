#include <iostream>

using namespace std;

void MyFunction() {

  static int LocaleNumber = 10;

  cout << "Value Of Number is " << LocaleNumber << endl;

  LocaleNumber++;
}

int main() {

  MyFunction();
  MyFunction();
  MyFunction();
  MyFunction();
  MyFunction(); // here The Number Equal 15.

  return 0;
}
