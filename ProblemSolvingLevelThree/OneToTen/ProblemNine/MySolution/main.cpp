/*


    == Write a program to fill two 3X3 matrix with random numbers,
        and print it. then print the middle row and middle columns.

        
    amjad =  Note == In this app i can print any column or row with this's functions (Print_Row, Print_Column).
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

void Print_Matrix(int arr[3][3], short Rows, short Clos)
{

    for(int i = 0; i < Rows; i++)
    {

        for(int j = 0; j < Clos; j++)
        {

         printf(" %0*d   ", 2, arr[i][j]);
            
        }

        cout << "\n";
    }

}

void Print_Row(int Matrix[3][3], short Row_Number, short Cols)
{
    for(int i = 0; i < Cols; i++)
    {
        
        printf(" %0*d   ", 2, Matrix[Row_Number - 1][i]);
                
    }
    cout << endl;

}

void Print_Column(int Matrix[3][3], short Column_Number, short Rows)
{
    for(int i = 0; i < Rows; i++)
    {
        
        printf(" %0*d   ", 2, Matrix[i][Column_Number - 1]);
                
    }
    cout << endl;
}


int main()
{

    srand((unsigned)time (NULL));

    int Matrix[3][3];
    
    Fill_Matrix_With_Random_Numbers(Matrix, 3, 3);
    cout << "\n\n The flowwing Is Matrix One Have Ran   dom Numbers Form 1 To 10:  \n";
    Print_Matrix(Matrix, 3, 3);


    cout << "\nRow 2: \n\n";
    Print_Row(Matrix, 2, 3);

    cout << "\nColumn 2: \n\n" << endl;
    Print_Column(Matrix, 2, 3);

    return 0;
}