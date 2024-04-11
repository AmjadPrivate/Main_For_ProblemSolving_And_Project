/*

    == Write a program to fill a 3X3 with ordered numbers.
        then print them.
        

*/

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

void Fill_Array_With_Ordered_Number(int arr[3][3], short Rows, short Clos)
{
    int Counter = 1;
    for(short i = 0; i < Rows; i++)
    {

        for(short j = 0; j < Clos; j++)
        {

            arr[i][j] = Counter;

            Counter++;
        
        }

    }

}




void Print_Matrix(int arr[3][3], short Rows, short Clos)
{

    for(int i = 0; i < Rows; i++)
    {

        for(int j = 0; j < Clos; j++)
        {

            cout << setw(3) << arr[i][j] << "   ";
            
        }

        cout << "\n";
    }

}

int main()
{
    int arr[3][3];

    Fill_Array_With_Ordered_Number(arr, 3, 3);

    cout << "\nThe following is a 3X3 oredered matrix:  \n\n";
    Print_Matrix(arr, 3, 3);



    return 0;
}