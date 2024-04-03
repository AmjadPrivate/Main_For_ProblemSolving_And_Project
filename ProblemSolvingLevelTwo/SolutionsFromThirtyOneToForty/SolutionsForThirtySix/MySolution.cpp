#include <iostream>


using namespace std;

int ReadNumber(string Message)
{
    int Number = 0;

    cout << "Plase Enter A Number? " << endl;
    cin >> Number;

    return Number;
}


bool AskToAddNumber()
{

    bool Ask;
    cout << "\nDo You Want To Add More Numbers? [0]NO,[1]Yes? ";
    cin >> Ask;

    return Ask;
}


void FillArrayWithAsks(int arr[100], int &ArrayLength)
{
    int Counter = 1;

    for(int i = 0; i < 100;)
    {
        arr[i] = ReadNumber("Plase Enter A Number?? ");
        
        if(AskToAddNumber() == true)
        {
            Counter++;
            i++;
            cout << endl;
            continue;

        }
        else
        {
            break;
        }

    }

    ArrayLength = Counter;

}


void PrintArray(int Array[100], int ArrayLength)
{
        
    for(int i = 0; i < ArrayLength; i++)
        cout << Array[i] << " ";

    

    cout << endl;
    
}



int main()
{

    int arr[100], ArrayLength;

    FillArrayWithAsks(arr, ArrayLength);


    // Print Array Lenght 
    cout << "\nArray Length: " << ArrayLength << endl;
    // Print Array Elements.
    cout << "Array Elements: ";
    PrintArray(arr, ArrayLength);

    return 0;
}