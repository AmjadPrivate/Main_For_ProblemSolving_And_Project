#include <iostream>
#include <cstdlib>


/*

    --> [ Max Number Of Random Array ]

        ==> Write A Program To Fill Array With Max Size 100 With Random Numbers From 1 To 100, 
            Then Print Max Number


*/


using namespace std;


void ApplicationName()
{
    cout << "\n\t\tMax Of Random Array\n\n";
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

int MaxNumberInArray(int Array[100], int ArrayLength)
{

    int Max = 0;

    for(int i = 0; i < ArrayLength; i++)
    {
        if(Array[i] > Max)
        {
            Max = Array[i];
        }

    }


    return Max;
}


int main()
{
    // Application Name.
    ApplicationName();

    srand((unsigned) time (NULL));

    int arr[100], ArrayLength;

    // Fill Array With Random Number.
    FillArrayWithRandomNumbers(arr, ArrayLength);

    // Print Array.
    cout << "\n Array Elements: \n";
    PrintArray(arr, ArrayLength);

    // Max Number In Array.
    cout << "\n Max Number Is: ";
    cout << MaxNumberInArray(arr, ArrayLength) << endl;


    return 0;
}