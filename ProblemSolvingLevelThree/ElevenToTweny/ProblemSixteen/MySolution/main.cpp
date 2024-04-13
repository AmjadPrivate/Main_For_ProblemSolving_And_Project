/*


    == Write a program to check the matrix is sparce or not.


    amjad - NOTE: A sparse matrix is a matrix in which most of the elements are zero.      
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

         printf("  %d   ", arr[i][j]);
            
        }

        cout << "\n";
    }
    cout << endl;

}

int Count_Number_In_Matrix(int Matrix[3][3], int Number, short Rows, short Cols)
{
    int NumberCount = 0;
    
    for(int i = 0; i < Rows; i++)
    {

        for(int j = 0; j < Cols; j++)
        {

            if(Matrix[i][j] == Number)
            {

                NumberCount++;

            }
            
        }

    }

    return NumberCount;
}

bool Is_Sparce_Matrix(int Matrix[3][3], short Rows, short Cols)
{
    return Count_Number_In_Matrix(Matrix, 0, Rows, Cols) >= (Rows * Cols) / 2;
}

int main()
{
    // int Matrix_One[3][3] ={ {1,0,0}, {0,1,0}, {0,0,1} }; 
    // int Matrix_One[3][3] ={ {9,0,0}, {0,9,0}, {0,0,9} }; 
    int Matrix_One[3][3] ={ {9,0,1}, {0,2,0}, {0,0,9} }; 
    // int Matrix_One[3][3] ={ {9,0,0}, {1,9,0}, {0,0,9} }; 
    // int Matrix_One[3][3] ={ {1,2,0}, {0,1,0}, {0,3,1} }; 


    cout << "\nMatrix one: \n";
    Print_Matrix(Matrix_One, 3, 3);
    
    
    cout << endl;

    if(Is_Sparce_Matrix(Matrix_One, 3, 3))
    {

        cout << "Yes: The Matrix Is Sparce." << endl;

    }
    else
    {

        cout << "No: The Matrix It's Not Sparce." << endl;

    }

         
    


    return 0;
}
