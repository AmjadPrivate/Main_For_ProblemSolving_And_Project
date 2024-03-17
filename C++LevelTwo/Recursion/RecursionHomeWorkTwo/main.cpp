#include <iostream>

using namespace std;

int MyPower(int Base, int Power) {

  if (Power == 0) {
    return 1;
  } else {

    return (2 * MyPower(Base, Power - 1));
  }
}

int main() {

  cout << "2 Power 4 Is " << MyPower(2, 4) << endl;

  return 0;
}
