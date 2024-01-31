/*


    --> Print Multiplication Table Form 1 To 10.


*/


#include <iostream>

using namespace std;


void MultiplicationTableHeader()
{

    cout  << "\n\n\t\t Multiplication Table Form 1 To 10\n";
    cout << endl;
    
    cout << "\t"; 
    for(int i = 1; i <= 10; i++)
    {
        cout << i << "\t";
    }


    cout << "\n------------------------------------------------------------------------------------\n";

}


string ColumnSeperator(int i)
{
    if(i < 10)
        return "    |";
    else    
        return "   |";
        
}


void PrintMultiplicationTable()
{

    MultiplicationTableHeader();

    for(int i = 1; i <= 10; i++)
    {
        cout << i << ColumnSeperator(i)  << "\t";

        for(int j = 1; j <= 10; j++)
        {
            cout << i * j << "\t";
        }


        cout << "\n";


    }


}


int main()
{
    PrintMultiplicationTable();

    return 0;
}