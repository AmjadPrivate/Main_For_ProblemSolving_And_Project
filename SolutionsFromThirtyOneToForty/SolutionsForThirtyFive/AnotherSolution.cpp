#include <iostream>


using namespace std;


int ReadNumber()
{
    int Number = 0;

    cout << "\nPlease Enter The To Search For It: \n";
    cin >> Number;
    
    
    return Number;
}


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
    srand((unsigned) time (NULL));


    cout << "\n";

    for(int i = 0; i < ArrayLength; i++)
    {

        cout << Array[i] << " ";

    }

    cout << endl;

}


// If These Function Returned -1 That's Mean The Number Is Not Found.
short FindNumberPositionInArray(int Number, int arr[100], int ArrayLength)
{

    for(int i = 0; i < ArrayLength; i++)
    {

        if(arr[i] == Number)
        {
            return i;
        }

    }


    return -1;
}



// If This Function Returned true That's Mean The Number Is Found, If False Mean The Number Is Not Found 
bool IsNumberInArray(int Number, int arr[100], int ArrayLength)
{
    return FindNumberPositionInArray(Number, arr, ArrayLength) != -1;
}




int main()
{

    srand((unsigned) time (NULL));

    int arr[100], ArrayLength;

    // Fill Array With Random Number.
    FillArrayWithRandomNumbers(arr, ArrayLength);
    
    // Print Array Elements
    cout << "\nArray Elements: \n";
    PrintArray(arr, ArrayLength);

    int Number = ReadNumber();

    cout << "\nNumber You Are Looking For It Is: " << Number << endl;

    if(!IsNumberInArray(Number, arr, ArrayLength)) // This If Satement Means == If The Function Returned True Make It False, If The Function Returned False Make It True 
    {
        cout << "\nNo, The Number Is Not Found :--(\n";
    }
    else
    {
        cout << "\nYes, The Number Not Found :--)\n";
    }    







    return 0;
}