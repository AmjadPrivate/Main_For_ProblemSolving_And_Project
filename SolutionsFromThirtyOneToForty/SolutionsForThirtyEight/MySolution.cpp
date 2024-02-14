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


bool IsOddNumber(int Number)
{
    return Number % 2 != 0;
}


void AddArrayElemets(int Number, int arr[100], int& ArrayLength)
{

    ArrayLength++;
    
    arr[ArrayLength - 1] = Number;

}


void CopyOddNumberInArrayUsingAddArrayElements(int SourceArray[100], int DestinationArray[100], int ArrayLength, int& Array2Length)
{
    for(int i = 0; i < ArrayLength; i++)
    {

        if(IsOddNumber(SourceArray[i]))
        {
            AddArrayElemets(SourceArray[i], DestinationArray, Array2Length);
        }
    
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
    int arr[100], ArrayLength = 0, Array2Length = 0; 

    FillArrayWithRandomNumbers(arr, ArrayLength);


    int arr2[100];
    CopyOddNumberInArrayUsingAddArrayElements(arr, arr2, ArrayLength, Array2Length);

    cout << "\n Array 1 Elements: \n";
    PrintArray(arr, ArrayLength);


    cout << "\n Array 2 Odd Numbers: \n";
    PrintArray(arr2, Array2Length);


    return 0;
}