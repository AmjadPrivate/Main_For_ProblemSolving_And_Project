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

int ReverseTheNumbers(int Number)
{
    int Remainder = 0, Reverse = 0; 

    while (Number != 0) 
    {
        Reverse = Reverse * 10;
        
        Remainder = Number % 10;
        Number = Number/ 10;

        Reverse = Remainder + Reverse;

    }


    return Reverse;
}


int main()
{

    int Number = ReadPositiveNumber("Please Enter A Positive Number? ");
    
    cout << endl;
    cout << Number << " After Reverse Will Be " << ReverseTheNumbers(Number) << endl;


    return 0;
}