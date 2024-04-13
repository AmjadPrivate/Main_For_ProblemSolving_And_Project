/*


    == Write a program to count the given number in matrix 
        
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

void Count_Number_In_Matrix(int Matrix[3][3], int& The_Number, int& Counter, short Rows, short Cols)
{
    Counter = 0;
    
    for(int i = 0; i < Rows; i++)
    {

        for(int j = 0; j < Cols; j++)
        {

            if(Matrix[i][j] == The_Number)
                Counter++;
            
        }

    }

}


int main()
{
    // int Matrix_One[3][3] ={ {1,0,0}, {0,1,0}, {0,0,1} }; 
    // int Matrix_One[3][3] ={ {9,0,0}, {0,9,0}, {0,0,9} }; 
    int Matrix_One[3][3] ={ {9,0,0}, {0,2,0}, {0,0,9} }; 
    // int Matrix_One[3][3] ={ {9,0,0}, {1,9,0}, {0,0,9} }; 
    // int Matrix_One[3][3] ={ {1,2,0}, {0,1,0}, {0,3,1} }; 


    cout << "\nMatrix one: \n";
    Print_Matrix(Matrix_One, 3, 3);
    
    int *ptr_Num = new int;
    int *ptr_Count = new int;

    cout << endl;
    cout << "Enter The Number To Count In Matrix: ";
    cin >> *ptr_Num;

    Count_Number_In_Matrix(Matrix_One, *ptr_Num, *ptr_Count, 3, 3);

    cout << endl;
    cout <<  "Number " << *ptr_Num << " Count In Matrix Is " << *ptr_Count << endl;
    


    delete ptr_Num;
    delete ptr_Count;


    return 0;
}