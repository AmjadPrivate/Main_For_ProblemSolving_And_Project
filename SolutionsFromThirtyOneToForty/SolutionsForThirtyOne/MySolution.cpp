#include <cmath>
#include <cstddef>
#include <cstdlib>
#include <iostream>


using namespace std;

int ReadPositiveNumber(string Message)
{

    int Number = 0;

    do {
        
        cout << Message << endl;
        cin >> Number;


    }
    while (Number <= 0);

    cout << endl;

    return Number;
}


int RandomNumber(int From, int To)
{
    int RandomNumber = rand() % (To - From + 1) + From;

    return RandomNumber;    
}


// This Is Function Fill Array Numbers From One To N
void FillArrayInOrderFrom_One_To_N(int Array[100], int ArrayLenght)
{

    for(int i = 0; i <= ArrayLenght; i++)
        Array[i] = i + 1;
    
}


void Swap(int& A, int& B)
{
    int Temp = 0;

    Temp = A;
    A = B;
    B = Temp;

}


void ShuffleArray(int Array[100], int ArrayLength)
{
    
    for(int i = 0; i < ArrayLength; i++)    
    {
        Swap(Array [RandomNumber(1, ArrayLength) - 1], Array [RandomNumber(1, ArrayLength) - 1]);
    }

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
    
    int arr[100],

    ArrayLenght = ReadPositiveNumber("Please Enter A Positive Number? ");

    // Fill Array In Order.
    FillArrayInOrderFrom_One_To_N(arr, ArrayLenght);

    // Print Array Before Shuffle.
    cout << "\n Array Before Shuffle: ";
    PrintArray(arr, ArrayLenght);


    // Shuffle Array
    ShuffleArray(arr, ArrayLenght);

    // Print Array After Suffled
    cout << "\n Array After Shuffled: ";
    PrintArray(arr, ArrayLenght);




    return 0;
}