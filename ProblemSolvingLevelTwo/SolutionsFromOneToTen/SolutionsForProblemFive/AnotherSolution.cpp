/*

    --> Write A Program To Reverse The Number
        --> Example:
            --> Input -->> 1234
            --> Output -->> 4321

*/

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


void PrintDigits(int Number)
{

    int Remainder = 0;

    cout << endl;

    while (Number != 0)
    {   
        Remainder = Number % 10;

        Number = Number / 10;
        
        cout << Remainder << endl;
    }
    

}

int main()
{

    PrintDigits(ReadPositiveNumber("Please Enter A Positive Number? "));

    return 0;
}