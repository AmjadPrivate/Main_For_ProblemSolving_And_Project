#include <iostream>
#include <cstdlib>


/*

    --> [ Max Number Of Random Array ]

        ==> Write A Program To Fill Array With Max Size 100 With Random Numbers From 1 To 100, 
            Then Print Max Number


*/


using namespace std;


void ApplicationName()
{
    cout << "\n\t\tMax Of Random Array\n\n";
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



int GetMaxNumberInArray(int Array[100], int ArrayLength)
{

    int Counter = 0;

    for(int i = 0; i < ArrayLength; i++)
    {

        for(int j = 0; j < ArrayLength; j++)
        {

            if(Array[i] >= Array[j])
            {
                Counter++;

                if(Counter == ArrayLength)
                {
                    return Array[i];
                }

            }
            else
            {
                Counter = 0;
            }

        }

    }

    return 0;
}


int main()
{
    ApplicationName();

    srand((unsigned)time (NULL));

    int Array[100], ArrayLength;
    
    
    // Fill Array With Random Numbers. 
    FillArrayWithRandomNumbers(Array, ArrayLength);


    // Print Array.
    PrintArray(Array, ArrayLength);


    // Get Max Number In Array.
    cout << "\n Max Number Is: ";
    cout << GetMaxNumberInArray(Array, ArrayLength) << endl;


    return 0;
}