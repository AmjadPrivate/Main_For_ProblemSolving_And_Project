/*


    == Write a program to check if the given number is exists or not.

    
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


bool Is_Number_In_Matrix(int Matrix[3][3], int Number, short Rows, short Cols)
{
   
    for(int i = 0; i < Rows; i++)
    {

        for(int j = 0; j < Cols; j++)
        {

            if(Matrix[i][j] == Number)
            {

                return true;

            }
            
        }

    }

    return false;
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
    
    int Number = 0;

    cout << "Please enter the number to look for in the matrix: ";
    cin >> Number;

    cout << endl;

    // Bad Practice
    if(Count_Number_In_Matrix(Matrix_One, Number, 3, 3) > 0)
        cout << "Yes: it's there" << endl;
    else
        cout << "No: it's not there" << endl;



    // Good Practice
    if(Is_Number_In_Matrix(Matrix_One, Number, 3, 3))
    {

        cout << "Yes: it's there" << endl;

    }
    else
    {

        cout << "No: it's not there" << endl;

    }

         

    return 0;
}
