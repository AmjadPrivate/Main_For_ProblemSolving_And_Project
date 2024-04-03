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


void FillArray(int NumberOfElements, int Array[])
{
    string Message = "";

    for(int i = 0;  i < NumberOfElements; i++)
    {

        Message = "Element [" + to_string( i + 1) + "]:";

        Array[i] = ReadPositiveNumber(Message);

    }

    cout << "\n\n";
    
}


void PrintArray(int Array[], int NumberOfElements)
{

    cout << "\nOriginal Array: ";

    for(int i = 0; i < NumberOfElements; i++)
    {
        cout << Array[i] << " ";
    }

    cout << endl;
}


int RepeatedNumbersInArray(int Array[], int NumberToCheck, int NumberOfElements)
{

    int Counter = 0;

    for(int i = 0; i < NumberOfElements; i++)
    {
        if(Array[i] == NumberToCheck)
        {
            Counter++;
        }
    }
    

    return Counter;
}


int main()
{

    ApplicationName();

    int NumberOfElements = ReadPositiveNumber("How Many Elements Do You To Stor?? ");
    int Array[NumberOfElements];

    FillArray(NumberOfElements, Array);

    int NumberYouWantToCheck = ReadPositiveNumber("Enter The Number You Want To Check? ");

    // Outputs:

    PrintArray(Array, NumberOfElements);

    cout << NumberYouWantToCheck << " Is Repeated " << RepeatedNumbersInArray(Array, NumberYouWantToCheck, NumberOfElements) << " Time(s) \n " << endl;


    return 0;
}