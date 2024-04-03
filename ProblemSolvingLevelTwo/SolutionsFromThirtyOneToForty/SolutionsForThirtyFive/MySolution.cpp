#include <cmath>
#include <cstdlib>
#include <iostream>


using namespace std;



int ReadPositiveNumber(string Message)
{

    int Number = 0;


    do
    {
        cout << Message << endl;
        cin >> Number;
    }
    while (Number <= 0);
    
    
    return Number;
}


int RandomNumber(int From, int To)
{
    int RandomNumber = rand() % (To - From + 1) + From;

    return RandomNumber;    
}


void FillArrayWithRandomNumbers(int arr[100], int& ArrayLength)
{

    ArrayLength = ReadPositiveNumber("How May Elements Do You Want?? ");


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


int PositionNumberInArray(int Array[100], int ArrayLength, int Number, int& Position)
{

    

    for (int i = 0; i < ArrayLength; i++) 
    {
        
        if(Array[i] == Number)
        {
            return Position;
        }

        Position++;

    }

    Position  = -1;

    return Position;
}


bool IsNumberFoundOrNot(int Array[100], int ArrayLength, int Position, int Number)
{

    if(PositionNumberInArray(Array,  ArrayLength, Number, Position) == -1)
        return false;
    else
        return true;
    
}


int main()
{
    srand((unsigned) time (NULL));

    int arr[100], ArrayLength;

    // Fiil Array With Random Number.
    FillArrayWithRandomNumbers(arr, ArrayLength);


    // Print Array.
    cout << "\nArray Elements: ";
    PrintArray(arr,  ArrayLength);


    int Number = ReadPositiveNumber("Please Enter The Number To Search For It?? ");

    int Position  = 0;


    cout << "\nNumber You Are Looking For It Is: " << Number << endl;

    if(IsNumberFoundOrNot(arr,  ArrayLength,  Position,  Number) == true)
        cout << "Yes, The Number Is Found :--) \n" << endl;
    else
        cout << "No, The Number Is Not Found :--) \n" << endl;


    return 0;   
}