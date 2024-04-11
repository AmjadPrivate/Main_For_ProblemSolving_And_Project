/*

    == Write a program to fill two 3X3 matrix with random numbers,
        and print them, then multiply them into 3rd matrix and print it.

        

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

void Print_Matrix(int arr[3][3], short Rows, short Clos)
{

    for(int i = 0; i < Rows; i++)
    {

        for(int j = 0; j < Clos; j++)
        {

         printf(" %0*d   ", 2, arr[i][j]);
            
        }

        cout << "\n";
    }

}

void Multiply_Two_Matrix(int Matrix_one[3][3], int Matrix_Two[3][3], int Matrix_Result[3][3], short Rows, short Clos)
{

    for(int i = 0; i < Rows; i++)
    {

        for(int j = 0; j < Clos; j++)
        {

            Matrix_Result[i][j] = Matrix_one[i][j] * Matrix_Two[i][j];
            
        }

    }

}

int main()
{

    srand((unsigned)time (NULL));

    int Matrix_one[3][3], Matrix_Two[3][3], Matrix_Result[3][3];
    
    Fill_Matrix_With_Random_Numbers(Matrix_one, 3, 3);
    cout << "\n\n The flowwing Is Matrix One Have Random Numbers Form 1 To 10:  \n";
    Print_Matrix(Matrix_one, 3, 3);


    Fill_Matrix_With_Random_Numbers(Matrix_Two, 3, 3);
    cout << "\n\n The flowwing Is Matrix Two Have Random Numbers Form 1 To 10:  \n";
    Print_Matrix(Matrix_Two, 3, 3);


    // Multiply Two Matrix
    Multiply_Two_Matrix(Matrix_one, Matrix_Two, Matrix_Result, 3, 3);
    cout << "\nResult: \n";
    Print_Matrix(Matrix_Result, 3, 3);


    return 0;
}