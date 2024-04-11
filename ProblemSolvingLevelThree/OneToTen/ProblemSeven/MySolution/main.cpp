/*

    == Write a program to fill a 3X3 with ordered numbers.
        And print it, The transpose matrix and print it.
        

*/

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

void FillArrayWithOrderedNumber(int arr[3][3], short Rows, short Clos)
{
    int Counter = 1;
    for(short i = 0; i < Rows; i++)
    {

        for(short j = 0; j < Clos; j++)
        {

            arr[i][j] = Counter;

            Counter++;
        
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

void TransposeMatrix(int arr[3][3], int arrTranspos[3][3], short Rows, short Cols)
{

    for(int i = 0; i < Rows; i++)
    {
        
        for(int j = 0; j < Cols; j++)
        {

            arrTranspos[j][i] = arr[i][j];

        }

    }

}

int main()
{
    int arr[3][3], arrTranspos[3][3];

    FillArrayWithOrderedNumber(arr, 3, 3);

    cout << "\nThe following is a 3X3 oredered matrix:  \n\n";
    PrintMatrix(arr, 3, 3);

    TransposeMatrix(arr, arrTranspos, 3, 3);

    cout << "\nThe following is the transposed matrix:  \n\n";
    PrintMatrix(arrTranspos, 3, 3);

    return 0;
}