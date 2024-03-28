#include <cstdio>
#include <iostream>

using namespace std;

void IntegerFormatting() {

  int Page = 1, TotalPage = 10;

  // Print String And Int Variables.
  printf("The Page Number %d \n", Page);
  printf("You Are In Page %d Of %d \n", Page, TotalPage);

  // Width Spicification

  printf("The Page Number =  %0*d \n", 2, Page);
  printf("The Page Number =  %0*d \n", 3, Page);
  printf("The Page Number =  %0*d \n", 4, Page);
  printf("The Page Number =  %0*d \n", 5, Page);
  printf("The Page Number =  %0*d \n", 6, Page);

  int Number1 = 20, Number2 = 30;

  printf("The Result Of %d + %d = %d \n", Number1, Number2, Number1 + Number2);
}

int main() {

  IntegerFormatting();

  return 0;
}
