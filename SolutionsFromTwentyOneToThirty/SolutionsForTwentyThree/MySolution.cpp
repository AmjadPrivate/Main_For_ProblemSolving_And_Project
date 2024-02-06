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


int ReadNumberInRange(int From, int To, string Message)
{
    int Number = 0;

    do 
    {
        
        cout << Message << endl;
        cin >> Number;

    }while (Number < From ||   Number > To);



    return Number;
}

int RandomNumber(int From, int To)
{
    
    int RandomNumber = rand() % (To - From + 1) + From; 

    return RandomNumber;
}

void FillArrayWithRandomNumbers(int Array[100], int& ArrayLength)
{

    ArrayLength = ReadNumberInRange(1, 100 , "Please Entet Array Length");
    

    for(int i = 0; i < ArrayLength; i++)
    {
        Array[i] = RandomNumber(1, 100);
    }


    


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

    srand((unsigned)time (NULL));

    int Array[100], ArrayLength;

    FillArrayWithRandomNumbers(Array, ArrayLength);

    cout << "\n Array Elements: \n";
    PrintArray(Array, ArrayLength);

    return 0;
}