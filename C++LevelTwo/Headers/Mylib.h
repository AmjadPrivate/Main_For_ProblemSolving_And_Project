//
// Created by AmjadAl-Sayed on 09/03/24.
//

#pragma once

#include <cstdlib>
#include <ios>
#include <iostream>
#include <limits>

using namespace std;

namespace Inputs {

float ReadFloatingNumber(string Message) {
  float Number;
  cout << "\n" << Message << endl;
  cin >> Number;

  return Number;
}

int ReadIntegerNumber(string Message) {
  int Number = 0;

  cout << Message << endl;
  cin >> Number;

  while (cin.fail()) // If cin.fail() == true, this while loop will work and
                     // this mean the input user entered is wrong, this Procese
                     // mean Validation Number.
  {
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    cout << "Invaled Number, Enter A Valid One: " << endl;
    cin >> Number;
  }

  return Number;
}

int ReadPositiveNumber(string Message) {
  int Number = 0;

  do {
    cout << Message << endl;
    cin >> Number;
  } while (Number <= 0);

  return Number;
}

int ReadIntegerNumberInRange(int From, int To, string Message) {
  int Number;
  do {
    cout << Message << endl;
    cin >> Number;

  } while (Number < From || Number > To);

  return Number;
}

int GetRandomNumberInRange(short From, short To) {
  return rand() % (To - From + 1) + From;
}

bool IsPerfectNumber(int Number) {
  int Sum = 0;

  for (int i = 1; i < Number; i++) {
    if (Number % i == 0) {
      Sum += i;
    }
  }

  return Number == Sum;
}

string OddOrEven(int Num) {
  return (Num % 2 == 0) ? "Even Number" : "Odd Number";
}

string NumberIsPositiveOrNegative(int Num) {
  return (Num == 0) ? "Neither" : ((Num > 0) ? "Positive" : "Negative");
}

} // namespace Inputs
