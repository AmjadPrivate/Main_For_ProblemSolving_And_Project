#include <iostream>

using namespace std;


int SumNumbers(int a, int b, int c = 0, int d = 0) // when you put initi value in Parameter this mean == the value you put it is the default value
{
    return (a + b + c + d);
}


int main()
{

    cout << SumNumbers(10, 20) << endl; 
    cout << SumNumbers(10, 20, 30) << endl;
    cout << SumNumbers(10, 20, 30, 40) << endl;


    return 0;
}