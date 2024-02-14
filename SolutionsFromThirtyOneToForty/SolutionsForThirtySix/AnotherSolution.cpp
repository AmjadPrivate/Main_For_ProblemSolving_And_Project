#include <iostream>


using namespace std;


int ReadNumber()
{
    int Number = 0;

    cout << "Plase Enter A Number? " << endl;
    cin >> Number;

    return Number;
}


void AddArrayElemets(int Number, int arr[100], int& ArrayLength)
{

    ArrayLength++;
    
    arr[ArrayLength - 1] = Number;

}


void InputUserNumbersInArray(int arr[100], int& ArrayLength)
{
    bool AddMore = true;

    do
    {
        AddArrayElemets(ReadNumber(), arr, ArrayLength);
        
        
        cout << "\n Do You Want To Add More Numbers? [0]No,[1]Yes?";
        cin >> AddMore;

    }
    while (AddMore);
        

}



void PrintArray(int Array[100], int ArrayLength)
{
        
    for(int i = 0; i < ArrayLength; i++)
        cout << Array[i] << " ";

    

    cout << endl;
    
}



int main()
{

    int arr[100], ArrayLength = 0;

    InputUserNumbersInArray(arr, ArrayLength);

    cout << "\nArray Length: " << ArrayLength << endl;
    cout << "Array Elements: ";
    PrintArray(arr, ArrayLength);


    return 0;
}