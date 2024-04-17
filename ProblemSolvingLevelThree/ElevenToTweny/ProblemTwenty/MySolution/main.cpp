/*

    = Write a program to check the matrix is palindrom or not

*/

#include <iostream>
#include <string>
#include<iomanip>

using namespace std;

void Print_Matrix(int Matrix[3][3], short Rows, short Cols)
{

    for(short i = 0; i < Rows; i++)
    {

        for(short j = 0; j < Cols; j++)
        {

            cout << setw(3) << Matrix[i][j] << "   ";

        }

        cout << endl;
    
    }

}


bool Is_Palindrom_Matrix(int Matrix[3][3], short Rows, short Cols)
{

        
    for(short i = 0; i < Rows ; i++)
    {

        for(short j = 0; j < Cols / 2 ; j++)
        {

            if(Matrix[i][j] != Matrix[i][Cols - 1 - j])
            {

                return false;
            
            }
            
        }
    
    }

    return true;
}

int main()
{

    // int MatrixOne[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} }; // Not Palindrom Matrix
    int MatrixOne[3][3] = { {1, 2, 1}, {4, 5, 4}, {7, 8, 7} }; // Palindrom Matrix

    cout << "\nMatrix One: " << endl;
    Print_Matrix(MatrixOne, 3, 3);

    cout << endl;
    if(Is_Palindrom_Matrix(MatrixOne, 3, 3) == true )
    {

        cout << "Yes, The Matrix It's Not Palindrom." << endl;
    
    }
    else
    {

        cout << "No, The Matrix It's Not Palindrom." << endl;

    }



    return 0;
}
