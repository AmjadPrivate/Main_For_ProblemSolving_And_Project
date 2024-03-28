#include <iostream>
#include <cstdlib>

using namespace std;

int RandomNumber(int From, int To)
{
    int Random = rand() % (To - From + 1) + 1;
    
    return Random;
}


void FillAndPrintTwoDimensionalArray()
{

    const int Rows = 12, Columns = 12; 

    int NumberOfElemetsInArray = 0; 
    int x [Rows] [Columns];



    // Fill Array With Random Number.
    for(int i = 0; i < Rows; i++)
    {

        for(int j = 0; j < Columns; j++)
        {
            // cout <<  "\n" <<"Enter index's " << i << " : " << j << " :" << endl;
            // cin >> 
            x[i][j] = RandomNumber(1, 100);
            NumberOfElemetsInArray++; 
        }


    }

    cout << endl << endl;

    // Print Array.
    for(int i = 0; i < Rows; i++)
    {

        for(int j = 0; j < Columns; j++)
        {
            cout << "Value Of Index " << i <<  "And Index " << j << " Is: ";
            cout << x[i][j] << endl; 
        }


    }

    cout << "\n==============\n";
    cout << NumberOfElemetsInArray;


}



void FillTwoDimensionalArrayHardCoding()
{

    // Fill Arary Hard Coding
    int x[3][4] = 
    {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}

    };


    for(int i = 0; i < 3; i++)
    {

        for(int j = 0; j < 4; j++)
        {
            cout << x[i][j] << " ";
        }
    
        cout << endl;
    
    }



}



int main() 
{
    signed((unsigned) time (NULL));

    
    // FillAndPrintTwoDimensionalArray();
    FillTwoDimensionalArrayHardCoding();

  return 0;   
}
