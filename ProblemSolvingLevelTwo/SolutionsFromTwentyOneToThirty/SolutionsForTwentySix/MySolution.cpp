#include <iostream>
#include <cstdlib>


/*

    --> [ Sum Of The Array With  Random Numbers ]

        ==> Write A Program To Fill Array With Max Size 100 With Random Numbers From 1 To 100
            Then Print Sum Of All Numbers.

*/


using namespace std;


void ApplicationName()
{
    cout << "\n\t\t Sum Of The Array With  Random Numbers\n\n";
}


int RandomNumber(int From, int To)
{
    int RandomNumber = rand() % (To - From + 1) + From; 

    return RandomNumber;
}


void FillArrayWithRandomNumbers(int arr[100], int& ArrayLength)
{

    cout  << "\n Enter Number Of Elements: \n";
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

int SumOfArray(int Array[100], int ArrayLength)
{
    int Sum = 0;

    for(int i = 0; i < ArrayLength; i++)
    {
        Sum += Array[i];
    }


    return Sum;
}

int main()
{

    srand((unsigned) time (NULL));

    int Array[100], ArrayLength;

    // Application Name
    ApplicationName();

    // Fill Array With Random Number.
    FillArrayWithRandomNumbers(Array, ArrayLength);

    // Print Array.
    cout << "\n Array Elements: ";
    PrintArray(Array, ArrayLength);

    // Min Number In Array.
    cout << "\nThe Sum Of Array Is: ";
    cout << SumOfArray(Array, ArrayLength) << endl;


    return 0;
}