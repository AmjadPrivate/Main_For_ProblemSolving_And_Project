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

bool Is_identity_Matrix(int Matrix[3][3], short Rows, short Cols)
{
    // Check diagonal elements are 1 and rest elements are 0;

    for(int i = 0; i < Rows; i++)
    {

        for(int j = 0; j < Cols; j++)
        {
            // Check for diagonal elements
            if(i == j && Matrix[i][j] != 1)
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
    int Matrix_One[3][3] ={ {1,0,0}, {0,1,0}, {0,0,1} };
    // int Matrix_One[3][3] ={ {1,2,0}, {0,1,0}, {0,3,1} };


    cout << "\nMatrix one: \n";
    Print_Matrix(Matrix_One, 3, 3);
       
       
   
    
    cout << endl;

    if(Is_identity_Matrix(Matrix_One, 3, 3))
        cout << "\nYes: The Matrix Is Identity." << endl;
    else
        cout << "\nNo: The Matrix Is Not Identity." << endl;
        


    return 0;
}