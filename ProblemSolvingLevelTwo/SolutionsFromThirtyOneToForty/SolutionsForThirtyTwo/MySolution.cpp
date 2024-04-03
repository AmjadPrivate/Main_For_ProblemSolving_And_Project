#include <iostream>


using namespace std;


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


void ReverseArray(int ArraySourse[100], int ArrayDestination[100], int ArrayLength)
{
    int Counter = ArrayLength - 1;


    for(int i = 0; i < ArrayLength; i++)
    {

        ArrayDestination[i] = ArraySourse[Counter];

        Counter--;

    }


}


int main()
{

    srand((unsigned) time (NULL));

    int arr1[100], arr2[100], ArrayLength;

    // Fill Arrray With Random Number.
    FillArrayWithRandomNumbers(arr1, ArrayLength);

    // Reverse Array
    ReverseArray(arr1, arr2, ArrayLength);


    // Print Array Before Reverse.
    cout << "\nArray Before Reverse: ";
    PrintArray(arr1, ArrayLength);

    // Print Array Affter Reverse.
    cout << "\nArray Affter Reverse: ";
    PrintArray(arr2, ArrayLength);


    return 0;
}