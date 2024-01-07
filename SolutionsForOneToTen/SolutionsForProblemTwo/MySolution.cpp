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


enPrimeOrNotPrime CheckPrimeOrNotPrime(int Number)
{

    int M = round(Number / 2);

    for(int Counter = 2; Counter <= M; Counter++)
    {
        if(Number % Counter == 0)
            return enPrimeOrNotPrime::NotPrime;
    }

    return enPrimeOrNotPrime::Prime;
}


void PrintPrimeNumbersFrom_1_To_N()
{
    int Number = ReadPositiveNumber("Please Enter A Positive Number? ");

    cout << endl;
    for(int Counter = 1; Counter <= Number; Counter++)
    {
        if (CheckPrimeOrNotPrime(Counter) == enPrimeOrNotPrime::Prime)
        {
            cout << Counter << endl;
        }
        
    }

}


int main()
{
    PrintPrimeNumbersFrom_1_To_N();

    return 0;
}