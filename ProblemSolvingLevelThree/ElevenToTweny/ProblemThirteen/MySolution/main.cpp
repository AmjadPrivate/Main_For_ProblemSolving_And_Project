/*


    == Write a program to check the matrix is identity or not 

    amjad-NOTE:: An identity matrix must be a square matrix, meaning it has the same number of rows and columns. 
        
*/


#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


void Print_Matrix(int arr[3][3], short Rows, short Cols)
{

    for(int i = 0; i < Rows; i++)
    {

        for(int j = 0; j < Cols; j++)
        {

         printf(" %d   ", arr[i][j]);
            
        }

        cout << "\n";
    }

}

int Row_Sum(int Matrix[3][3], short Row_Number, short Cols)
{
    int Matrix_Sum = 0;

    for(int i = 0; i < Cols; i++)
    {

        Matrix_Sum += Matrix[Row_Number][i];

    }

    return Matrix_Sum;
}


bool Is_identity_Matrix(int Matrix[3][3], short Rows, short Cols)
{
    // The rows should be equal with columns, and the columns should be equla with the rows.
    if(Rows != Cols)
        return false;
    

    for(short i = 0; i < Rows; i++)
    {

        if( Row_Sum(Matrix, i, Cols) != 1 || Matrix[i][i] != 1)
        {

            return false;
        
        }

    }

    return true;
    
}

int main()
{
    srand((unsigned)time (NULL));

   

    // int Matrix_One[3][3] ={ {1,0,0}, {0,1,0}, {0,0,1} };
    int Matrix_One[3][3] ={ {1,2,0}, {0,1,0}, {0,3,1} };


    cout << "\nMatrix one: \n";
    Print_Matrix(Matrix_One, 3, 3);



    cout << endl;

    if(Is_identity_Matrix(Matrix_One, 3, 3))
        cout << "\nYes: The Matrix Is Identity." << endl;
    else
        cout << "\nNo: The Matrix Is Not Identity." << endl;
        
        

    return 0;
}