#include <cmath>
#include <cstddef>
#include <cstdlib>
#include <iostream>


using namespace std;

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


int RandomNumber(int From, int To)
{
    int RandomNumber = rand() % (To - From + 1) + From;

    return RandomNumber;    
}


// This Is Function Fill Array Numbers From One To N
void FillArrayInOrderFrom_One_To_N(int Array[100], int N)
{

    for(int i = 1; i <= N; i++)
    {
        Array[i - 1] = i;
    }


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


void ShuffleArray(int Array[100], int N)
{
    int RandomNum = 0;

    for (int i = 0; i < N;) 
    {
        RandomNum = RandomNumber(1, N);

        if(IsRepeated(Array,  RandomNum,  N) == enIsNumberRepeated::NotRepeated)
        {
            Array[i] = RandomNum;
            i++;
            
        }
        

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
    srand((unsigned) time (NULL));
    
    int arr[100],
    N = ReadPositiveNumber("Please Enter A Positive Number? ");

    // Fill Array In Order.
    FillArrayInOrderFrom_One_To_N(arr, N);

    // Print Array Before Shuffle.
    cout << "\n Array Before Shuffle: ";
    PrintArray(arr, N);


    // Shuffle Array
    ShuffleArray(arr, N);

    // Print Array After Suffled
    cout << "\n Array After Shuffle: ";
    PrintArray(arr, N);




    return 0;
}