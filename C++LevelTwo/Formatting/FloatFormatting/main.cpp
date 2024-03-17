#include <cstdio>
#include <iostream>

using namespace std;

void FloatFormatting() 
{

    float PI = 3.14159265;

  printf("Precision Specification Of %.*f \n" ,1, PI);
  printf("Precision Specification Of %.*f \n" ,2, PI);
  printf("Precision Specification Of %.*f \n" ,3, PI);
  printf("Precision Specification Of %.*f \n" ,4, PI);
  printf("Precision Specification Of %.*f \n" ,5, PI);

  float x = 7.0, y = 9.0;

  printf("\nThe Float Division Is : %.3f / %.3f =  %.3f \n\n", x, y, x / y);

  double d = 12.45;

  printf("The Double Value Is: %.3f \n", d);
  printf("The Double Value Is: %.4f \n", d);


    

}

int main() {

  FloatFormatting();

  return 0;
}
