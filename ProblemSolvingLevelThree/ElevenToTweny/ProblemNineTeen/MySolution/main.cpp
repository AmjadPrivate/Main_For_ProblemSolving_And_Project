/*


    == Write a program to print the minimum and the maximum numbers in the matrix.

    
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


void Print_Matrix(int arr[3][3], short Rows, short Cols)
{

    for(short i = 0; i < Rows; i++)
    {

        for(short j = 0; j < Cols; j++)
        {

         cout << setw(3) << arr[i][j] << "   ";
            
        }

        cout << "\n";
    }
    cout << endl;

}


int Minimum_Number_In_Matrix(int Matrix[3][3], short Rows, short Cols)
{
    int Min_Number = Matrix[0][0];

    for(short i = 0; i < Rows; i++)
    {
        
        for(short j = 0; j < Cols; j++)
        {
            
            if(Matrix[i][j] < Min_Number)
            {

                Min_Number = Matrix[i][j]; 
            
            }

        }

    }

    return Min_Number;

}

int Maximum_Number_In_Matrix(int Matrix[3][3], short Rows, short Cols)
{
    int Max_Number = Matrix[0][0];

    for(short i = 0; i < Rows; i++)
    {
        
        for(short j = 0; j < Cols; j++)
        {
            
            if(Matrix[i][j] > Max_Number)
            {

                Max_Number = Matrix[i][j]; 
            
            }

        }

    }

    return Max_Number;

}


int main()
{

    int Matrix_One[3][3] ={ {10,12,3}, {9,12,4}, {78,12,89} }; 
    // int Matrix_Two[3][3] ={ {9,0,1}, {12,23,1}, {90,0,22} }; 

    cout << "\nMatrix one: \n";
    Print_Matrix(Matrix_One, 3, 3);
    
    cout << endl;

    cout << "Minimum Number Is: " 
        << Minimum_Number_In_Matrix(Matrix_One, 3, 3) << endl; 


    cout << "Maximum Number Is: " 
        << Maximum_Number_In_Matrix(Matrix_One, 3, 3) << endl;

        
    return 0;
}