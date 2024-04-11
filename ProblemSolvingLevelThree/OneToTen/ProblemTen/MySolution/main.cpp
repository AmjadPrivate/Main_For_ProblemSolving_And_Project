/*


    == Write a program to fill two 3X3 matrix with random numbers,
        and print them. then write a function to sum all numbers in this matrix and print it.

        
*/


#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int RandomNumber(int Form, int To)
{
    int RandomNumber = rand() % (To - Form - 1) + Form;
    
    return RandomNumber;
}

void Fill_Matrix_With_Random_Numbers(int arr[3][3], short Rows, short Clos)
{
    
    for(short i = 0; i < Rows; i++)
    {

        for(short j = 0; j < Clos; j++)
        {

            arr[i][j] = RandomNumber(1, 10);
        
        }

    }

}

void Print_Matrix(int arr[3][3], short Rows, short Cols)
{

    for(int i = 0; i < Rows; i++)
    {

        for(int j = 0; j < Cols; j++)
        {

         printf(" %0*d   ", 2, arr[i][j]);
            
        }

        cout << "\n";
    }

}

int Sum_Matrix(int Matrix[3][3], short Rows, short Cols)
{
    int Sum_Matrix = 0;

    for(int i = 0; i < Rows; i++)
    {

        for(int j = 0; j < Cols; j++)
        {

            Sum_Matrix += Matrix[i][j];
            
        }

    }

    return Sum_Matrix;
}

int main()
{
    srand((unsigned)time (NULL));

    int Matrix[3][3];

    Fill_Matrix_With_Random_Numbers(Matrix, 3, 3);

    cout << "\nMatrix one: \n";
    Print_Matrix(Matrix, 3, 3);

    cout << "\nSum of matrix one: " << Sum_Matrix(Matrix, 3, 3) << endl; 



    return 0;
}