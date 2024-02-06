#include <iostream>
#include <cstdlib>


/*

    --> [ Min Number Of Random Array ]

        ==> Write A Program To Fill Array With Max Size 100 With Random Numbers From 1 To 100
            Then Print Minimum Number

*/


using namespace std;


void ApplicationName()
{
    cout << "\n\t\t The Mininum Number Of Random Array\n\n";
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

int MinNumberInArray(int Array[100], int ArrayLength)
{
    int Min = 100;    

    for(int i = 0; i < ArrayLength; i++)
    {
        if(Array[i] < Min)
        {
            Min = Array[i];
        }
    }


    return Min;
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
    cout << "\n Array Elements: " << endl;
    PrintArray(Array, ArrayLength);

    // Min Number In Array.
    cout << "\n Min Number Is: ";
    cout << MinNumberInArray(Array, ArrayLength) << endl;


    return 0;
}