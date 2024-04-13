/*


    == Write a program to check the matrix is Scalar or not 

    amjad-NOTE:: A scalar matrix is a square matrix in which all the diagonal elements are equal,
     and all the off-diagonal elements are zero. 
        
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

         printf(" %d    ", arr[i][j]);
            
        }

        cout << "\n";
    }

}

bool Is_Scalar_Matrix(int Matrix[3][3], short Rows, short Cols)
{
    // Check diagonal elements are equals and rest elements are 0;

    int First_Number_In_Diagonal = Matrix[0][0]; // the diagonal elements should be like that element 

    for(int i = 0; i < Rows; i++)
    {

        for(int j = 0; j < Cols; j++)
        {
            // Check for diagonal elements
            if(i == j && Matrix[i][j] != First_Number_In_Diagonal)
            {
             
                return false;
            
            }
            // Check for rest elements  
            else if(i != j && Matrix[i][j] != 0)
            {

                return false;

            }
        }

    }

    return true;

}

int main()
{
    // int Matrix_One[3][3] ={ {1,0,0}, {0,1,0}, {0,0,1} }; // Scalar
    int Matrix_One[3][3] ={ {9,0,0}, {0,9,0}, {0,0,9} }; // Scalar
    // int Matrix_One[3][3] ={ {9,0,0}, {0,2,0}, {0,0,9} }; // Not Scalar
    // int Matrix_One[3][3] ={ {9,0,0}, {1,9,0}, {0,0,9} }; // Not Scalar
    // int Matrix_One[3][3] ={ {1,2,0}, {0,1,0}, {0,3,1} }; // Not Scalar


    cout << "\nMatrix one: \n";
    Print_Matrix(Matrix_One, 3, 3);
       
       
   
    
    cout << endl;

    if(Is_Scalar_Matrix(Matrix_One, 3, 3))
        cout << "\nYes: The Matrix Is Scalar." << endl;
    else
        cout << "\nNo: The Matrix Is Not Scalar." << endl;
        


    return 0;
}