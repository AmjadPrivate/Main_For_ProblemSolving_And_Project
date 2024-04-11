/*

    == Write a program to fill a 3X3 matrix with random numbers,
        Then print each col sum.

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


int ColumnSum(int arr[3][3], short ColumnNumber, int Rows)
{
    int Sum = 0;

    for(int i = 0; i <= Rows - 1; i++)
    {
        Sum += arr[i][ColumnNumber];
    }



    return Sum;
}


void PrintEachColumnsSum(int arr[3][3], short Rows, short Columns)
{

    cout << "\nThe following are the sum of each cloumns in the matrix:\n";

    for(int i = 0; i < Columns ; i++)
    {

        cout << "Columns " << i + 1 << " Sum: " << ColumnSum(arr, i, Rows) << endl;;
    
    }

}


int main()
{

    srand((unsigned) time (NULL));

    int arr[3][3]; 

    //  Fill matrix with random number.
    FillMatrixWithRandomNumbers(arr, 3, 3);

    cout << "\n\nThe Following Is 3x3 Random Matrix:\n";
    PrintMatrix(arr, 3, 3); 

    PrintEachColumnsSum(arr, 3, 3);

    return 0;
}