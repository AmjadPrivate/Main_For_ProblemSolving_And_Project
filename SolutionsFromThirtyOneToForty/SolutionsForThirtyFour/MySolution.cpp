#include <cmath>
#include <cstdlib>
#include <iostream>


using namespace std;


int ReadNumberInRange(int From, int To, string Message)
{
    int Number = 0;

    do 
    {
        
        cout << Message << endl;
        cin >> Number;

    }while (Number < From ||   Number > To);



    return Number;
}


int RandomNumber(int From, int To)
{
    int RandomNumber = rand() % (To - From + 1) + From;

    return RandomNumber;    
}


void FillArrayWithRandomNumbers(int arr[100], int& ArrayLength)
{

    ArrayLength = ReadNumberInRange(1,  100, "How May Elements Do You Want?? ");


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


int main()
{
    srand((unsigned) time (NULL));

    int arr[100], ArrayLength;

    // Fiil Array With Random Number.
    FillArrayWithRandomNumbers(arr, ArrayLength);


    // Print Array.
    cout << "\nArray Elements: ";
    PrintArray(arr,  ArrayLength);


    int Number = ReadNumberInRange(1, 100,  "Please Enter The Number To Search For It?? ");

    int Position  = 0;
    // Find The Position Number In Array
    PositionNumberInArray(arr, ArrayLength, Number, Position);

    cout << "Number You Are Looking For It Is: " << Number << endl;
    if(Position >= 0)
    {
        cout << "The Number Found At Position: " <<  Position << endl;
        cout << "The Number Found It's Order: " <<  Position + 1 << endl;
    }
    else 
    {
        cout << "The Number Is Not Found :-( " << endl;
    }



    return 0;   
}