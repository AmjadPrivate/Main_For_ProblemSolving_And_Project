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


int DeleteUsedDigits( int Number, int UsedDigit)
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


int CountDigitFrecquency(int Number, int Digit)
{

    int Remainder = 0, Counter = 0;

    while (Number != 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
    
        if(Remainder == Digit)
        {
            Counter ++;
        }

    }
    

    return Counter;
}


int GetDigit(int Number)
{
    return Number % 10;
}


void PrintAllDigitsFrecquency(int Number)
{

    cout << "\n";

    do
    {
        int Degit = GetDigit(Number);

        cout << "Digit " << Degit << " Frecquecy Is " << CountDigitFrecquency(Number, Degit) << " Time(s)." << endl;

        Number = DeleteUsedDigits(Number, Degit);

    } 
    while (Number != 0);

    cout << endl;
    

}



int main()
{

    PrintAllDigitsFrecquency(ReadPositiveNumber("Please Enter A Group Of Numbers? "));


    return 0;
}