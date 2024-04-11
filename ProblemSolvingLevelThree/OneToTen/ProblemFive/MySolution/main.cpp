/*

    == Write a program to fill a 3X3 matrix with random numbers,
        Then sum each column in another array and print them:

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


int ColumnSum(int arr[3][3], short ColumnNumber, short Rows)
{   
    int Sum = 0;

    for(short j = 0; j < Rows; j++)
    {

        Sum += arr[j][ColumnNumber];
    
    }

    return Sum;    
}


void SumMatrixColumnsInArray(int arr[3][3], int arrSum[3], short Rows, short Columns)
{

    cout << "\n\nThe following are the sum of each column in the matrix:\n\n";
    for(short i = 0; i <= Columns - 1; i++)
    {

        arrSum[i] = ColumnSum(arr, i, Rows);

    }

}


void PrintColumnsSumArray(int arrSum[3], short ColumnNumber)
{

    for(int i = 0; i <= ColumnNumber - 1; i++)
    {

        cout << "Column " << i + 1 << " Sum: " << arrSum[i] << endl;
    
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

    // Storage the sum of rows in another single array.
    SumMatrixColumnsInArray(arr, arrSum, 3, 3);


    PrintColumnsSumArray(arrSum, 3);

    return 0;
}