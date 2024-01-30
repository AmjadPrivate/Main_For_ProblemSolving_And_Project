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


void PrintInvertedLettersPattern(int Number)
{

    int LettersCounter = (65 + Number) - 1;

    cout << endl;

    for(int i = Number; i >= 1; i--)
    {


        for(int j = i; j >= 1; j--)
        {
            cout << char(LettersCounter);
        }

        LettersCounter--;

        cout << endl;
        
    }



}


int main()
{
    PrintInvertedLettersPattern(ReadPositiveNumber("Please Enter A Positive Number? "));

    return 0;
}