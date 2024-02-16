#include <iostream>


using namespace std;

// Disinct Number == Mean Number Does Not Repeated 

// Fill Arary Hard Codeing
void FillArray(int arr[100])
{
    arr[0] = 10,
    arr[1] = 10,
    arr[2] = 10,
    arr[3] = 50,
    arr[4] = 50,
    arr[5] = 70,
    arr[6] = 70,
    arr[7] = 70,
    arr[8] = 70,
    arr[9] = 90;

}


short FindNumberPositionInArray(int Number, int arr[100], int ArrayLength)
{

    for(int i = 0; i < ArrayLength; i++)
    {

        if(arr[i] == Number)
        {
            return i;
        }

    }


    return -1;
}

// If This Function Returned true That's Mean The Number Is Found, If False Mean The Number Is Not Found 
bool IsNumberInArray(int Number, int arr[100], int ArrayLength)
{
    return FindNumberPositionInArray(Number, arr, ArrayLength) != -1;
}


void AddArrayElemets(int Number, int arr[100], int& ArrayLength)
{

    ArrayLength++;
    
    arr[ArrayLength - 1] = Number;

}


void CopyDistinctNumbersInArray(int SourceArray[100], int DestinationArray[100], int ArrayLenght, int& Array2Lenght) 
{

    for(int i = 0; i < ArrayLenght; i++)
    {

        if(!IsNumberInArray(SourceArray[i], DestinationArray, Array2Lenght))
        {
            AddArrayElemets(SourceArray[i], DestinationArray, Array2Lenght);
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

    srand((unsigned) time (NULL));

    int arr[100], ArrayLenght = 10, Array2Lenght = 0;  


    FillArray(arr);

    // Print Array 1 Elements.
    cout << "\nArray 1 Elements: \n";
    PrintArray(arr, ArrayLenght);

    int arr2[100];

    CopyDistinctNumbersInArray(arr, arr2, ArrayLenght, Array2Lenght);

    
    // Print Array 2 Elements.
    cout << "\nArray 2 Distinct Elements: \n";
    PrintArray(arr2, Array2Lenght);

    return 0;
}