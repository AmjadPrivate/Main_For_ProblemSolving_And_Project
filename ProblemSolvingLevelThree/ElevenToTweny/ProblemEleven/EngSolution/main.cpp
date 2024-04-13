/*


    == Write a program to compare two matrices and check if they are equal or not
        
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

bool Are_Equal_Matrices(int Matrix_One[3][3], int Matrix_Two[3][3], short Rows, short Cols)
{
    return ( Sum_Matrix(Matrix_One, Rows, Cols) == Sum_Matrix(Matrix_Two, Rows, Cols) );
}

int main()
{
    srand((unsigned)time (NULL));

    int Matrix_One[3][3], Matrix_Two[3][3];

    Fill_Matrix_With_Random_Numbers(Matrix_One, 3, 3);
    cout << "\nMatrix one: \n";
    Print_Matrix(Matrix_One, 3, 3);


    Fill_Matrix_With_Random_Numbers(Matrix_Two, 3, 3);
    cout << "\nMatrix Two: \n";
    Print_Matrix(Matrix_Two, 3, 3);
    

    cout << endl;

    if(Are_Equal_Matrices(Matrix_One, Matrix_Two, 3, 3))
        cout << "\nYes: Both Matrices Are  Equal." << endl;
    else
        cout << "\nNo: Matrices Are Not Equal." << endl;
        

    return 0;
}