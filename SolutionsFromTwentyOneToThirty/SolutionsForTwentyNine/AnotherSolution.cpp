#include <cmath>
#include <iostream>
#include <cstdlib>
#include <math.h>
#include <random>

using namespace std;

enum enIsPrimeNumber {IsPrime = 1, NotPrime = 2};


int RandomNumber(int From, int To)
{
    int RandomNumber = rand() % (To - From + 1) + From;

    return RandomNumber;
}


void FillArrayWithRandomNumbers(int arr[100], int& ArrayLength)
{

    cout  << "\nEnter Number Of Elements: \n";
    cin >> ArrayLength;


    for(int i = 0; i < ArrayLength; i++)
        arr[i] = RandomNumber(1, 100);

}


enIsPrimeNumber CheckPrimeNumber (int Number)
{

    int M = round(Number / 2);

    for(int Counter = 2; Counter <= M; Counter++)
    {
        if(Number % Counter == 0)
        {
            return enIsPrimeNumber::NotPrime;
        }
    }

    return enIsPrimeNumber::IsPrime;
}

// This Procdural Copy Only Prime Numbers, And The Same Time It Also Give Me How Many Prime Numbers In The Array, To Used In The Main Function To Print The Seconde Array.
void CopyOnlyPrimeNumbers(int SourceArray[100], int DestinationArray[100], int ArrayLength, int& Arr2Length)  
{
    int Counter = 0;

    for(int i = 0; i < ArrayLength; i++)
    {

        if(CheckPrimeNumber(SourceArray[i]) == enIsPrimeNumber::IsPrime)
        {

            DestinationArray[Counter] = SourceArray[i];

            Counter++;
        }
        
    }

    Arr2Length = --Counter;

}


void PrintArray(int Array[100], int ArrayLength)
{

    cout << "\n";

    for(int i = 0; i < ArrayLength; i++)
    {

        cout << Array[i] << " ";

    }

    cout << endl;

}


int main()
{
    srand((unsigned) time (NULL) );

    int arr1[100], ArrayLength = 0;

    // Fill Source Array With Random Number.
    FillArrayWithRandomNumbers(arr1, ArrayLength);

    // Print Source Array.
    cout << "\nArray 1 Elements: ";
    PrintArray(arr1, ArrayLength);

    // Copy Only Prime Numbers.
    int arr2[100], array2Length = 0;

    CopyOnlyPrimeNumbers(arr1, arr2, ArrayLength, array2Length);

    // Print Prime Array Only.
    cout << "\nPrime Numbers In Array 2: ";
    PrintArray(arr2, array2Length);

    return 0;
}