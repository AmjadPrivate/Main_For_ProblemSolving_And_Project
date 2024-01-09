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




int main()
{
    int Number = ReadPositiveNumber("Please Enter The Main Number? ");
    short int DigitToCheck = ReadPositiveNumber("Please Enter One Digit To Check? ");


    cout << "\n"
        << "Digit " << DigitToCheck << " Frecquency Is " << CountDigitFrecquency(Number, DigitToCheck)
            << " Time(s)\n" << endl; 


    return 0;
}