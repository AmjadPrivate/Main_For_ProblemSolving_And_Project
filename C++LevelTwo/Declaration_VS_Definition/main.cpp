#include <iostream>
#include "Mylib.h"

using namespace std;
using namespace Inputs;


// Function Declaration
void sumtwonumbers (int , int );

int main()
{

    sumtwonumbers(12, 21);


    return 0;
}



// Function Definition
void sumtwonumbers(int a, int b)
{
    cout << a + b << endl;
}
