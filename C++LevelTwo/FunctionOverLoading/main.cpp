#include <iostream>
#include <string>
// #include "Headers/Mylib.h"

using namespace std;

int MySum(int a, int b)
{
    return (a + b);
}

double MySum(double a, double b)
{
    return (a + b);
}

double MySum(double a, int b)
{
    return (a + b);
}


// int MySum(int a, int b)
// {
//     return (a + b);
  
// }



int main() 
{ 

  cout << MySum(12.232 , 12.22) << endl;
  cout << MySum(12.232 , 12) << endl;


  return 0; 
  
}
