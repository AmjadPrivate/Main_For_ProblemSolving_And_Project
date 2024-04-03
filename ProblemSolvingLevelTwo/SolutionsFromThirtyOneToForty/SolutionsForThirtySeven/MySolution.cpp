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


void AddArrayElemets(int Number, int arr[100], int ArrayLength)
{

    ArrayLength++;
    
    arr[ArrayLength - 1] = Number;

}


void CopyArrayNumbers(int SourceArray[100], int DestinationArray[100], int ArrayLength)

{
    for(int i = 0; i < ArrayLength; i++)
    {
        AddArrayElemets(SourceArray[i], DestinationArray, i);
    }

}


void PrintArray(int Array[100], int ArrayLength)
{
        
    for(int i = 0; i < ArrayLength; i++)
        cout << Array[i] << " ";

    

    cout << endl;
    
}




int main()
{

    int arr[100], ArrayLength;

    srand((unsigned) time (NULL));


    // Fill Array With Random Number.
    FillArrayWithRandomNumbers(arr, ArrayLength);


    cout << endl;

    // Print Array 1 Eements .
    cout << "Array 1 Elements : \n";
    PrintArray(arr, ArrayLength);



    // Create The Destination Array.
    int arr2[100];



    // Copy Array Elements In Destination Array
    CopyArrayNumbers(arr, arr2, ArrayLength);

    cout << endl;

    // Print Array 2 Elements 
    cout << "Array 2 Elements After Copy : \n";
    PrintArray(arr2, ArrayLength);
    
    

    return 0;
}