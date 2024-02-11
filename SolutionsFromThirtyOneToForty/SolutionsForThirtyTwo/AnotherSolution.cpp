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



void CopyArrayInReverseOrder(int ArraySourse[100], int ArrayDestination[100], int ArrayLength)
{

    for(int i = 0; i < ArrayLength; i++)
    {

        ArrayDestination[i] = ArraySourse[ArrayLength - 1 - i];

    }

} 



int main()
{
    srand((unsigned) time (NULL));

    // Max Size For Array Is 100.
    int arr[100], ArrayLength;

    // Fill Array With Random Number.
    FillArrayWithRandomNumbers(arr, ArrayLength);

    // Print Array Before Reverse.
    cout << "\n Array Before Reverse: ";
    PrintArray(arr, ArrayLength);
    
    int arr2[100];


    // Copy Array In Reverse Order.
    CopyArrayInReverseOrder(arr, arr2, ArrayLength);

    
    // Print Array After Reverse.
    cout << "\n Array After Reversed: ";
    PrintArray(arr2, ArrayLength);

    return 0;
}