#include <cmath>
#include <cstddef>
#include <cstdlib>
#include <iostream>


using namespace std;

void FillArray(int arr[100], int& ArrayLength)
{
    ArrayLength = 7;

    arr[0] = 10,
    arr[1] = 20,
    arr[2] = 30,
    arr[3] = 30,
    arr[4] = 30,
    arr[5] = 20,
    arr[6] = 10;

}


void AddArrayElements(int Number, int ArrayDestination[100], int& ArrayLength)
{

    ArrayLength++;

    ArrayDestination[ArrayLength + 1] = Number;

}


void CopyReversedArray(int ArraySource[100], int ArrayDestination[100], int ArrayLength, int& Array2Length)
{

    for(int i = ArrayLength - 1; i > 0; i--)
    {

        AddArrayElements(ArraySource[i], ArrayDestination, Array2Length);
    
    }

}


enum enIsPalindrom {PalindromArray = 1, NotPalindromArray = 2 };

enIsPalindrom IsPalindromArray(int SourceArray[100], int DestinationArray[100], int ArrayLength, int& Array2Length)
{
    // This Function For Reverseing Array. 
    CopyReversedArray(SourceArray, DestinationArray,ArrayLength, Array2Length);
    
    for(int i = 0; i < ArrayLength; i++)
    {

        if(SourceArray[i] != DestinationArray[i])
        {
            return enIsPalindrom::PalindromArray;
        }

    }

    return enIsPalindrom::NotPalindromArray;
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
    srand((unsigned) time (NULL));


    int arr[100], ArrayLength = 0;

    FillArray(arr, ArrayLength);

    int arr2[100], Array2Length;


    // Copy Reversed Array


    // Print Source Array.  
    cout << "\nArray 1 Elements: ";
    PrintArray(arr, ArrayLength);

    if(IsPalindromArray(arr, arr2,  ArrayLength, Array2Length) == enIsPalindrom::PalindromArray)
    {
        cout << "\n Yes The Array Is Palindrom \n";
    }
    else {
        cout << "\n No The Array Is Not Palindrom \n";
    
    }


    return 0;
}