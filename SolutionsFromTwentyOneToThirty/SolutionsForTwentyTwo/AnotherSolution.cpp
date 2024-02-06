#include <iostream>
#include <string.h>
#include <string>

/*

    [ Repeated Elements Count In Array ]

    --> Write A Program To Read N Elements  And Stor Them In Array, Then Print All Array Elements And Ask From Number To Check
    Then Print How Many Number To Check, Then Print How Many Number Certain Element Repeated In That Array.


*/

using namespace std;


void ApplicationName()
{
    
    cout << "\n\t\tRepeated Elements Count In Array\t\t\n" << endl;
}


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


void ReadArray(int arr[100], int& ArrayLength)
{

    cout << "\n Please Enter Number Of Elements: \n";
    cin >> ArrayLength;

    cout << "\n Enter Array Elements: \n";

    for(int i = 0; i < ArrayLength; i++)
    {

        cout << "Element [" << i + 1 << "]: ";
        cin >> arr[i];

    }
    cout << endl;

}


void PrintArray(int arr[100], int ArrayLength)
{

    for(int i  = 0; i < ArrayLength; i++)
        cout << arr[i] << " ";

    cout << endl;

}

int TimesRepeated(int Number, int arr[100], int ArrayLength)
{
    
    int Counter = 0;

    for(int i = 0; i < ArrayLength; i++)
    {

        if(arr[i] == Number)
            Counter++;
            
    }

    return Counter;
}

int main()
{
    // Application Name.
    ApplicationName();

    int arr[100], ArrLength, NumberToCheck;

    // Read Array.
    ReadArray(arr, ArrLength);

    
    NumberToCheck = ReadPositiveNumber("Enter The Number You Want To Check? ");
    
    // Print Array.
    cout << "\n Original Array: ";
    PrintArray(arr, ArrLength);



    // Print Repeated Times
    cout << "\n Number " << NumberToCheck;
    cout << " Is Repeated " << TimesRepeated(NumberToCheck, arr, ArrLength);
    cout << " Time(s)" << endl;



    return 0;
}