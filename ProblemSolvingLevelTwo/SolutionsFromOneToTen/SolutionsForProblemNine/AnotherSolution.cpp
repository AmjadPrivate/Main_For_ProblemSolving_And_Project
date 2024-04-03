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


void PrintAllDigitsFrecquency(int Number)
{

    cout << endl;

    for(int i = 0; i <= 9; i++)
    {
        short int  DigitFrecquency = 0;

        DigitFrecquency = CountDigitFrecquency(Number, i);

        if(DigitFrecquency > 0)
        {

            cout << "Digit " << i << " Frecquecy Is " << CountDigitFrecquency(Number, i) << " Time(s)." << endl;
            
        }

    }
    cout << endl;
}



int main()
{

    int Number = ReadPositiveNumber("Please Enter A Positive Number? ");

    PrintAllDigitsFrecquency(Number);

    return 0;
}



