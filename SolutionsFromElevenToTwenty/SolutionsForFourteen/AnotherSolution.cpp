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


    cout << endl;

    for(int i = Number + 65 - 1; i >= 65; i--)
    {


        for(int j = 1; j <= Number - (Number + 65 - 1 - i); j++)
        {
            cout << char(i);
        }


        cout << endl;
        
    }

    cout << endl;
    



}


int main()
{
    PrintInvertedLettersPattern(ReadPositiveNumber("Please Enter A Positive Number? "));

    return 0;
}