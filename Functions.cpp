#include <cmath>
#include <cstdlib>
#include <iostream>


using namespace std;


int RandomNumber(int From, int To)
{
    int RandomNumber = rand() % (To - From + 1) + From;

    return RandomNumber;    
}


int ReadNumber()
{
    int Number = 0;

    cout << "Plase Enter A Number? " << endl;
    cin >> Number;

    return Number;
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
        
    for(int i = 0; i < ArrayLength; i++)
        cout << Array[i] << " ";

    

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


int PositionNumber(int Array[100], int ArrayLength, int Number)
{

    int Counter = 0;

    for (int i = 0; i < ArrayLength; i++) 
    {
        
        if(Array[i] == Number)
        {
            return Counter;
        }

        Counter++;

    }


    return -1;

}


enum enFoundOrNot {Found = 1, NotFound = 2};
enFoundOrNot SearchForNumberInArrayIsFoundOrNot(int Array[100], int ArrayLength,int NumberToSearch)
{

    for(int i = 0; i < ArrayLength; i++)
    {
        if(Array[i] == NumberToSearch)
        {
            return enFoundOrNot::Found;
        }
    }

    return enFoundOrNot::NotFound;
}



// If This Function Returned true That's Mean The Number Is Found, If False Mean The Number Is Not Found 
bool IsNumberInArray(int Number, int arr[100], int ArrayLength)
{
    return FindNumberPositionInArray(Number, arr, ArrayLength) != -1;
}


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


void CopyArrayUsingAddArrayElemet(int SourceArray[100], int DestinationArray[100], int ArrayLength, int& Array2Length)
{
    for(int i = 0; i < ArrayLength; i++)
    {
        AddArrayElemets(SourceArray[i], DestinationArray, Array2Length);
    }

}




int main()
{
    srand((unsigned) time (NULL));

    // // int arr [10]= {1,1,2,4,6,4,9,8,10,11};


    // if(IsRepeated(arr,  1, 10) == enIsNumberRepeated::Repeated)
    // {
    //     cout << "\n Repeated \n" << endl;
    // }
    // else
    // {
    //     cout << "\n Not Repeated \n" << endl;
    // }

    return 0;
}