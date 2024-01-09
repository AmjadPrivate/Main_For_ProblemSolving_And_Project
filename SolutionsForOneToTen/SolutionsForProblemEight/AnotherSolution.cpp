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


int CountDigitFrecquency(int DigitToCheck, int Number)
{

    int FrecquencyCount = 0, Remainder = 0;

    while (Number != 0)
    {
        
        Remainder = Number % 10;
        Number = Number / 10;

        if(Remainder == DigitToCheck)
        {
            FrecquencyCount++;
        }

    }
    

    return FrecquencyCount;
}



int main()
{

    int Number = ReadPositiveNumber("Please Enter The Main Number? ");
    int DigitToCheck = ReadPositiveNumber("Please Enter Digit To Check? ");

    cout << "\n Digit " << DigitToCheck << " Frecquency Is "
        << CountDigitFrecquency(DigitToCheck, Number) << " Time(s)\n";



    return 0;
}