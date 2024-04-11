
/*

    == Write a program to fill a (3 by 3) matrix with random number,
    Then Print each row sum.

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

void PrintRowsSum(int arr[3][3], short Rows, short Cols)
{
    int *ptrSum = new int;

    for(int i = 0; i < Rows; i++)
    {

        for(int j = 0; j < Rows; j++)
        {
            *ptrSum += arr[i][j];
        }

        cout << "Row " << i + 1 << " Sum: " << *ptrSum << endl;

        *ptrSum = 0;

    }

    delete ptrSum;


}

int main()
{
    srand((unsigned) time (NULL));

    int arr[3][3];

    //  Fill matrix with random number.
    FillMatrixWithRandomNumbers(arr, 3, 3);
        
        
        

    cout << "\n\nThe Following Is 3x3 Random Matrix:\n";
    PrintMatrix(arr, 3, 3); 

    cout <<endl;
    cout << "\n The Following Are The Sum Of Each Row In The Mitrix: \n";
    PrintRowsSum(arr, 3, 3);


    return 0;
}