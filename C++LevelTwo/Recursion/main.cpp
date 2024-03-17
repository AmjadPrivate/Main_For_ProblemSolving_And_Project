#include <iostream>

using namespace std;

void PrintNumbers(int From, int To) {

  if (From <= To) {
    cout << From << endl;
    PrintNumbers(From + 1, To);
  }
}

int add(int n) {

  if (n == 0) {
    return 0;
  }

  return (n + add(n - 1));
}

int main() {

  //  PrintNumbers(1, 1097890);

  cout << add(5) << endl;

  return 0;
}
