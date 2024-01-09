/*

    --> Write A Program To Sum All Of Digits.

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


int SumOfDigits(int Number)
{

    int Sum = 0, Remainder = 0;

    while(Number != 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;

        Sum = Sum + Remainder;
    }

    return Sum;
}


int main()
{
    cout << "\n Sum Of Digits ="
        << SumOfDigits(ReadPositiveNumber("Please Enter A Positive Number? "))
        << "\n";

    return 0;
}