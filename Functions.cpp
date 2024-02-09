#include <cmath>
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


int SumArray(int Array[100], int ArrayLength)
{
    int Sum = 0;

    for(int i = 0; i < ArrayLength; i++)
    {
        Sum += Array[i];
    }


    return Sum;
}


float AverageArray(int Array[100], int ArrayLength)
{
    return float(SumArray(Array, ArrayLength)) / ArrayLength;
}


void CopyArray(int SourceArray[100], int DestinationArray[100], int ArrayLength)
{
    for(int i = 0; i < ArrayLength; i++)
    {
       DestinationArray[i] = SourceArray[i]; 
    }

}


bool CheckPrimeNumber(int Number)
{

    // #include <math.h>
    int M = round(Number / 2);

    for(int Counter = 2; Counter <= M; Counter++)
    {
        if(Number % Counter == 0)
            return false;
    }
    

    return true;
}



enum enIsNumberRepeated {Repeated = 1, NotRepeated = 2};
enIsNumberRepeated IsRepeated(int Array[100], int Number, int ArrayLength)
{
    int Counter = 0;

    for(int i = 0; i < ArrayLength; i++)
    {
        if(Array[i] == Number)
        {
            Counter++;

            if(Counter > 1)
                return enIsNumberRepeated::Repeated;
        }
    }

    return enIsNumberRepeated::NotRepeated;

}



int main()
{
    srand((unsigned) time (NULL));

    int arr [10]= {1,1,2,4,6,4,9,8,10,11};


    if(IsRepeated(arr,  1, 10) == enIsNumberRepeated::Repeated)
    {
        cout << "\n Repeated \n" << endl;
    }
    else
    {
        cout << "\n Not Repeated \n" << endl;
    }

    return 0;
}