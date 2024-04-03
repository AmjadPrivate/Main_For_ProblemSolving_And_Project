#include <cstdlib>
#include <iostream>


using namespace std;

void ApplicationName()
{
    cout << "\n\t\t Copy Array In Another One \n" << endl;
}


int RandomNumber(int From, int To)
{
    int RandomNumber = rand() % (To - From + 1) + From;

    return RandomNumber;    
}

void FillArrayWithRandomNumber(int Array[100], int &ArrayLength)
{
    cout << "\n Enter Number Of Elements: ";
    cin >> ArrayLength;

    for(int i = 0; i < ArrayLength; i++)
        Array[i] = RandomNumber(1, 100);

}

void PrintArray(int Array[100], int ArrayLength)
{

    for(int i = 0; i < ArrayLength; i++)
    {

        cout << Array[i] << " ";

    }
    cout << endl;

}


void CopyArrayInAnotherArray(int MainArray[100], int SecondeArray[100], int ArrayLength)
{
    for(int i = 0; i < ArrayLength; i++)
    {
       SecondeArray[i] = MainArray[i]; 
    }

}


int main()
{

    srand((unsigned) time (NULL));

    int MainArray[100], SecondeArray[100], ArrayLength;

    // Fill Array With Random Number,
    FillArrayWithRandomNumber(MainArray, ArrayLength);


    // Copy The Array In Another One.
    CopyArrayInAnotherArray(MainArray, SecondeArray, ArrayLength);


    // Print The Main Array First And Print The Seconde Array.
    cout << "\nThe Main Array Is :" << endl;
    PrintArray(MainArray, ArrayLength);

    // Print Seconde Array.
    cout << "\nCoped Array Is: " << endl;   
    PrintArray(SecondeArray, ArrayLength);



    return 0;
}