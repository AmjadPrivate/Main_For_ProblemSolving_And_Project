/*


    == Write a program to print the intersected number in two given matrices

    
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

         cout << setw(3) << arr[i][j] << "   ";
            
        }

        cout << "\n";
    }
    cout << endl;

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


void Print_Intersected_Number_In_Two_Matrices(int Matrix_One[3][3], int Matrix_Two[3][3], short Rows, short Cols)
{

    cout << endl;
    cout << "Intersected Numbers Are: " << endl;

    for(int i = 0; i < Rows; i++)
    {

        for(int j = 0; j < Cols; j++)
        {

            if(Is_Number_In_Matrix(Matrix_Two, Matrix_One[i][j], Rows, Cols))
            {

                cout << setw(3) << Matrix_One[i][j] << "     ";

            }
            
        }

      
    }

    cout << endl;


}


int main()
{

    int Matrix_One[3][3] ={ {10,12,3}, {9,12,4}, {78,12,89} }; 
    int Matrix_Two[3][3] ={ {9,0,1}, {12,23,1}, {90,0,22} }; 

    cout << "\nMatrix one: \n";
    Print_Matrix(Matrix_One, 3, 3);
    
    cout << endl;
    
    cout << "\nMatrix Two: \n";
    Print_Matrix(Matrix_Two, 3, 3);

    cout << endl;

    Print_Intersected_Number_In_Two_Matrices(Matrix_One, Matrix_Two, 3, 3);

         

    return 0;
}
