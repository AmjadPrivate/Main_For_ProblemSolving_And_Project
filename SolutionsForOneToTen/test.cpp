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


int DeleteUsedDigit( int Number, int UsedDigit)
{
    int Remainder = 0, TheNewNumber = 0;

    while (Number != 0)
    {

        Remainder = Number % 10;
        Number = Number / 10;
        

        if(Remainder != UsedDigit)
        {
            TheNewNumber = TheNewNumber * 10;   
            TheNewNumber += Remainder;    
        }

    }
    
    return TheNewNumber;
}


int HowManyDigitsINNumber(long long int Number)
{
    int Counter = 0;

    while (Number != 0)
    {
        Number = Number / 10;
        Counter++;
    }
    

    return Counter;
}



int main()
{


    return 0;
}