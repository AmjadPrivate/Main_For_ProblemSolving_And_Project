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


int ReverseNumber(int Number)
{
    int Remainder = 0, Sum = 0;


    while (Number != 0) 
    {
        Sum = Sum * 10;

        Remainder = Number % 10;
        Number = Number / 10;

        Sum += Remainder;

    }

    return Sum;
}


void PrintDigits(int Number)
{

    int Remainder = 0;

    cout << "\n";
    while (Number != 0) 
    {

        Remainder = Number % 10;
        Number = Number / 10;

        cout << Remainder << endl;

    }

}


int main()
{

    PrintDigits(ReverseNumber(ReadPositiveNumber("Please Enter A Positive Number?")));



    return 0;
}