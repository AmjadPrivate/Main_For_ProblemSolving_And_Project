/*

    == Write a program to fill a 3X3 matrix with random numbers,
        Then sum each rom in separate array and print the result.

*/


#include <iostream>
#include <iomanip>
#include <string>
#include <stdio.h>

using namespace std;

int RandomNumber(int Form, int To)
{
    int RandomNumber = rand() % (To - Form - 1) + Form;
    
    return RandomNumber;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Clos)
{
    
    for(short i = 0; i < Rows; i++)
    {

        for(short j = 0; j < Clos; j++)
        {

            arr[i][j] = RandomNumber(1, 100);
        
        }

    }

}

void PrintMatrix(int arr[3][3], short Rows, short Clos)
{

    for(int i = 0; i < Rows; i++)
    {

        for(int j = 0; j < Clos; j++)
        {

            cout << setw(3) << arr[i][j] << "   ";
            
        }

        cout << "\n";
    }

}

int RowSum(int arr[3][3], short RowNumber, short Cols)
{   
    int Sum = 0;

    for(short i = 0; i <= Cols - 1; i++)
    {
        Sum += arr[RowNumber][i];
    }

    return Sum;    
}


void SumMatrixRowsInArray(int arr[3][3], int arrSum[3], short Rows, short Cols)
{

    for(short i = 0; i < Rows; i++)
    {
    
        arrSum[i] = RowSum(arr, i, Cols); 
    
    }

}

void PrintRowsSumArray(int arr[3], short Rows)
{
    
    cout << "\nThe the following are the sum of each row in the matrix: \n";

    for(short i = 0; i < Rows; i++)
    {

        cout << "Row " << i + 1 << " Sum: " << arr[i] << endl;
    
    }

}


int main()
{
    srand((unsigned) time (NULL));

    int arr[3][3], arrSum[3]; 


    //  Fill matrix with random number.
    FillMatrixWithRandomNumbers(arr, 3, 3);

    cout << "\n\nThe Following Is 3x3 Random Matrix:\n";
    PrintMatrix(arr, 3, 3); 

    SumMatrixRowsInArray(arr, arrSum, 3, 3);

    PrintRowsSumArray(arrSum, 3);

    return 0;
}