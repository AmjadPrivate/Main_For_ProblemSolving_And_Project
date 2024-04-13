/*


    == Write a program to compare two matrices and check if they are Typical or not
        
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

void Fill_Matrix_With_Random_Numbers(int arr[3][3], short Rows, short Cols)
{
    
    for(short i = 0; i < Rows; i++)
    {

        for(short j = 0; j < Cols; j++)
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

bool Are_Typical_Matrices(int Matrix_One[3][3], int Matrix_Two[3][3], short Rows, short Cols)
{
    for(short i = 0; i < Rows; i++)
    {

        for(short j = 0; j < Cols; j++)
        {
            if(Matrix_One[i][j] != Matrix_Two[i][j])
            {
                return false; 
            }
           
        }

    }

    return true;
    
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

    if(Are_Typical_Matrices(Matrix_One, Matrix_Two, 3, 3))
        cout << "\nYes: Both Matrices Are  Typical." << endl;
    else
        cout << "\nNo: Matrices Are Not typical." << endl;
        

    return 0;
}