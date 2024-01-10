#include <iostream>
#include <limits>


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
    int Remainder = 0, NumberAfterReverse = 0;

    while (Number != 0) 
    {
    
        Remainder = Number % 10;
        Number = Number / 10;

        NumberAfterReverse = NumberAfterReverse * 10;
        NumberAfterReverse += Remainder;

    }

    return NumberAfterReverse;
}

bool IsPalindrome(int Number, int NumberAfterReverse)
{
    return Number == NumberAfterReverse;
}


int main()
{
    int Number = ReadPositiveNumber("Please Enter A Positive Number? ");  

    cout << "\n";
    if(IsPalindrome(Number, ReverseNumber(Number)))
        cout << Number << " Is A Palindrome Number." << endl;
    else
        cout << Number << " Is Not A Palindrome Number." << endl;

    return 0;
}