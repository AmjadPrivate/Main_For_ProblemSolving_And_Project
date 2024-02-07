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


void PrintArray(int Array[100], int ArrayLength)
{

    cout << "\n";

    for(int i = 0; i < ArrayLength; i++)
    {

        cout << Array[i] << " ";

    }

    cout << endl;

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


void CopyPrimeNumbersInAnotherArray(int SourceArray[100], int DestinationArray[], int& ArrayLength)
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

    ArrayLength = Counter; 
}


int main()
{

    srand((unsigned) time (NULL));

    // Create Arrays
    int SourceArray[100], DestinationArray[50], ArrayLength;
    

    // Fill Source Array With Random Numbers.
    FillArrayWithRandomNumbers(SourceArray, ArrayLength);

    // Print Source Array.
    cout << "\nSource Array Is: ";
    PrintArray(SourceArray, ArrayLength);

    // Copy Prime Numbers In Another Array.
    CopyPrimeNumbersInAnotherArray(SourceArray, DestinationArray, ArrayLength); // I Chenged The Array Length To Use It In Print Function ,As How Many Prime Number In The Main Array.


    // Print Destination Array.
    cout << "\nPrime Numbers In Array:";
    PrintArray(DestinationArray, ArrayLength);

    return 0;
}