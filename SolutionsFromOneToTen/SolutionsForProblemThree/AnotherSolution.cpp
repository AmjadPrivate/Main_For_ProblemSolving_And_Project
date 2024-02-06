/*

    --> Write A Program To Check If Number Is Perfect Or Not.

*/

#include <iostream>


using namespace std;


int ReadPositiveNumber(string Message)
{

    int Number = 0;

    do
    {
        cout << Message << endl;
        cin >> Number;
    }
    while (Number <= 0);
    
    
    return Number;
}


bool IsPerfectNumber(int Number)
{
    int Sum = 0;

    for(int i = 1; i < Number; i++)
    {
        if(Number % i == 0)
        {
            Sum += i;
        }
    }

    return Number == Sum;
}


void PrintResult(int Number)
{
    cout << endl;
    if( IsPerfectNumber(Number) )
        cout << Number << " Is Perfect Number." << endl;
    else
        cout << Number << " Is NOT Perfect Number." << endl;

}

int main()
{

    PrintResult(ReadPositiveNumber("Please Enter A Positive Number? "));



    return 0;
}