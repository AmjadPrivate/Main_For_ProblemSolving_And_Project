#pragma once

#include <cstdlib>
#include <iostream>

using namespace std;

namespace MyLib {

int GetRandomNumberInRange(int Form, int To) {
  int RandomNumber = rand() % (To - Form - 1) + Form;

  return RandomNumber;
}

} // namespace MyLib
