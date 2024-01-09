/*


    --> Print Multiplication Table Form 1 To 10.


*/

#include <iostream>

using namespace std;

 
void PrintTableHeader()
{

    cout << "\n\n\t\t\t Multiplication Table From 1 To 10 \n\n";

    cout << "\t";
    for (int i = 1; i <= 10 ; i++)
    {
        cout << i << "\t";
    }

    cout << "\n------------------------------------------------------------------------------------\n";

}

string ColumnSepartor(int i)
{

    if (i < 10)
        return "   |";
    else  
        return "  |";

}


void PrintMultiplicationTable()
{
    PrintTableHeader();


    for(int i = 1; i <= 10; i++)
    {

        cout << " " << i << ColumnSepartor(i) << "\t"; // This For Columns

        for(int j = 1; j <= 10; j++)
        {
            cout << i * j << "\t"; // This For Rows
        }

        cout << endl;
    }

}


int main()
{
    PrintMultiplicationTable();

    return 0;
}