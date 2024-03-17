/*

    --> Write A Program To Print All Perfect Numbers From 1 To N.

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


bool IsPerfectNumber(int Number)
{
    int Sum = 0;

    for(int i = 1; i < Number; i++)
    {

        if(Number % i == 0)
        {
        
            Sum += i;
        
        }
    
    }

    return Number == Sum;

}


void PrintAllPerfectNumberFrom1ToN(int Number)
{
    cout << "\n";
    cout  << "All Perfect Numbers From " << 1 << " To " << Number << " Are: " << endl;

    cout << endl;

    for(int i = 1; i <= Number; i++)
    {

        if( IsPerfectNumber(i) == true )
        {

            cout << i << endl;

        }

    }

}


int main()
{
    
    PrintAllPerfectNumberFrom1ToN(ReadPositiveNumber("Please Enter A Positive Number? "));


    return 0;
}
