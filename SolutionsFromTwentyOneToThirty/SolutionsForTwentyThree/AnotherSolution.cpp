#include <cstdlib>
#include <iostream>


/*

    --> [Fill Array With Random Numbers From 1 To 100]

        ==> Write A Program To Fill Array With Max Size 100 With Random Number From 1 To 100


*/

using namespace std;

void ApplicationName()
{
    cout << "\n\t\t Fill Array With Random Numbers From 1 To 100\n\n";
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


int main()
{
    ApplicationName();

    srand((unsigned)time(NULL));

    int arr[100], ArrayLength;

    // Fill Array With Random Numbers
    FillArrayWithRandomNumbers(arr, ArrayLength);


    // Print Array.
    cout << "\n Array Elements: \n";
    PrintArray(arr,  ArrayLength);


    return 0;
}