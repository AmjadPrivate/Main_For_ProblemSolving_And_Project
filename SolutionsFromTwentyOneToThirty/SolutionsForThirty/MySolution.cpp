<<<<<<< HEAD
=======
#include <cmath>
>>>>>>> refs/remotes/origin/main
#include <cstdlib>
#include <iostream>


using namespace std;

int RandomNumber(int From, int To)
{
    int RandomNumber = rand() % (To - From + 1) + From;

    return RandomNumber;    
}


void FillArrayWithRandomNumbers(int arr[100], int& ArrayLength)
{

    cout  << "\nEnter Number Of Elements: \n";
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




int ReadPositiveNumber(string Message)
{

<<<<<<< HEAD
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


void FillArrayWithRandomNumbers(int arr[100], int ArrayLength) // In This Situation I Delelted The Lines Takes The Length Of Array.
{

    // cout  << "\nEnter Number Of Elements: \n";
    // cin >> ArrayLength;


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


void SumOfTwoArrays(int arr1[100], int arr2[100], int arr3[100], int ArrayLength)
{

    for(int i = 0; i < ArrayLength; i++)
    {
        arr3[i] = arr1[i] + arr2[i]; 
    }

}

int main()
{
    
    srand((unsigned) time (NULL));

    int arr1[100], arr2[100], 
    ArrayLength = ReadPositiveNumber("Enter Array Length? "); 

    // Fill Array One.
    FillArrayWithRandomNumbers(arr1, ArrayLength);

    // Fill Array Two.
    FillArrayWithRandomNumbers(arr2, ArrayLength);


    // This Array We Will Put The Sum Of Two Arrays In It.
    int arr3[100];

    // Sum Of Tow Arrays.
    SumOfTwoArrays(arr1, arr2, arr3, ArrayLength);

    // Print Array One.
    cout << "\nElements Of Array One:";
    PrintArray(arr1,  ArrayLength);

    // Print Array Two.
    cout << "\nElements Of Array Two: ";
    PrintArray(arr2,  ArrayLength);

    // Print The Result.
    cout << "\nSum Of Arrays: ";
    PrintArray(arr3,  ArrayLength);

    
=======
    srand((unsigned) time (NULL));

    // Create Arrays
    int SourceArray[100], DestinationArray[50], ArrayLength;
    

>>>>>>> refs/remotes/origin/main
    return 0;
}