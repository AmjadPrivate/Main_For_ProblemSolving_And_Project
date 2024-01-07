/*

    --> Print All Prime Numbers From 1 To N.

*/

#include <iostream>
#include <math.h>


using namespace std;

enum enPrimeOrNotPrime {Prime = 1, NotPrime = 2};


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


enPrimeOrNotPrime CheckPrime(int Number)
{
    int M = round(Number / 2);

    for(int Counter = 2;  Counter <= M; Counter++)
    {

        if (Number % Counter == 0)
        {
            return enPrimeOrNotPrime::NotPrime;
        }
        
    }

    return enPrimeOrNotPrime::Prime;

}


void PrintPrimeNumbersFrom1ToN(int Number)
{
    cout << "\n";
    cout << "Prime Numbers From " << 1 << " To " << Number;
    cout << " Are: " << endl;

    for(int i = 1; i <= Number; i++)
    {
        if (CheckPrime(i) == enPrimeOrNotPrime::Prime)
        {
            cout << i << endl;
        }
        
    }

}


int main()
{
    
    PrintPrimeNumbersFrom1ToN(ReadPositiveNumber("Please Enter A Positive Number?"));

    return 0;
}
