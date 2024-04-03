#include <cstdlib>
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


void CopyArray(int SourceArray[100], int DestinationArray[100], int ArrayLength)
{
    for(int i = 0; i < ArrayLength; i++)
    {
       DestinationArray[i] = SourceArray[i]; 
    }

}



int main()
{
    srand((unsigned) time (NULL));

    int arr1[100], ArrayLength;
    // Fill Array.
    FillArrayWithRandomNumbers(arr1, ArrayLength);


    // Copy Array.
    int arr2[100];
    CopyArray(arr1, arr2, ArrayLength);


    // Print The Main Array First And Print The Seconde Array.
    cout << "\nThe Main Array Is :" << endl;
    PrintArray(arr1, ArrayLength);

    // Print Seconde Array.
    cout << "\nCoped Array Is: " << endl;   
    PrintArray(arr2, ArrayLength);


    return 0;
}