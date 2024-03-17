#include <iostream>

using namespace std;

void PrintMultiplicationTable(int Table[10][10])
{

    for(int i = 0; i < 10; i++)
    {

        for(int j = 0; j < 10; j++)
        {

            if(Table[i][j] >= 1 && Table[i][j] <= 9)
            {
                // cout << "0" << Table[i][j] << " ";
                printf("%0*d ", 2, Table[i][j]);
            }
            else
            {
                printf("%d ", Table[i][j]);
            }


        }

        cout << endl;
    }


}


void MultiplicationTable()
{
     int Table[10][10];
    
    for(int i = 0; i < 10; i++)
    {

        for(int j = 0; j < 10; j++)
        {
            Table[i][j] = (i + 1) * (j + 1);
        }

    }

    PrintMultiplicationTable(Table);

}


int main() 
{

    MultiplicationTable();

    return 0;   
}
