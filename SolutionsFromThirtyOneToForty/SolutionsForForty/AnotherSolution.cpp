#include <iostream>


using namespace std;

void FillArray(int arr[100], int& ArrayLength)
{   
    ArrayLength = 10;


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



void CopyDistinctNumbersToArray(int arraySourcce[100], int arrayDestination[100], int ArrayLenght, int& Array2Lenght) 
{

    for(int i = 0; i < ArrayLenght; i++)
    {
        // If The Number Isn't In Array The Condation Will Happend
        if(!IsNumberInArray(arraySourcce[i], arrayDestination, Array2Lenght))
        {
            AddArrayElemets(arraySourcce[i], arrayDestination, Array2Lenght);
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
    int arraySource[00], SourceLenght = 0,
        arrayDestination[100], DestinationLength = 0;

    FillArray(arraySource, SourceLenght);


    cout << "\nArray 1 Elements: \n";
    PrintArray(arraySource, SourceLenght);

    CopyDistinctNumbersToArray(arraySource, arrayDestination, SourceLenght, DestinationLength);

    cout << "\nArray 2 Distinct Elements: \n";
    PrintArray(arrayDestination, DestinationLength);
    

    return 0;
}