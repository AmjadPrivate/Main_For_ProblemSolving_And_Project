/*


    == Write a program to fill two 3X3 matrix with random numbers,
        and print it. then print the middle row and middle columns.

        
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

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Clos)
{
    
    for(short i = 0; i < Rows; i++)
    {

        for(short j = 0; j < Clos; j++)
        {

            arr[i][j] = RandomNumber(1, 10);
        
        }

    }

}

void PrintMatrix(int arr[3][3], short Rows, short Clos)
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


void PrintMidleRowOfMatrix(int Matrix[3][3], short Rows, short Cols)
{
    short MiddleRow = Rows / 2;

    for(int i = 0; i < Cols; i++)
    {
        
        printf(" %0*d   ", 2, Matrix[MiddleRow][i]);
                
    }
    cout << endl;

}


void PrintMidleColumnOfMatrix(int Matrix[3][3], short Rows, short Cols)
{
    short MiddleColumn = Cols / 2;

    for(int i = 0; i < Cols; i++)
    {
        
        printf(" %0*d   ", 2, Matrix[i][MiddleColumn]);
                
    }
    cout << endl;

}


int main()
{

    srand((unsigned)time (NULL));

    int Matrix[3][3];
    
    FillMatrixWithRandomNumbers(Matrix, 3, 3);
    cout << "\n\n The flowwing Is Matrix One Have Random Numbers Form 1 To 10:  \n";
    PrintMatrix(Matrix, 3, 3);

    cout << "\nMiddle Row Of Matrix Is:\n";
    PrintMidleRowOfMatrix(Matrix,3, 3);

    cout << "\nMiddle Columns Of Matrix Is:\n";
    PrintMidleColumnOfMatrix(Matrix, 3, 3);


    return 0;
}