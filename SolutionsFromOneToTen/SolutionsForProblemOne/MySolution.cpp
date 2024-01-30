/*


    --> Print Multiplication Table Form 1 To 10.


*/


#include <iostream>

using namespace std;

void MultiplicationTableHeader()
{
    
    cout << "\n                  Multiplication Table Form 1 To 10                  " << endl;

    cout << endl;

    for(int Counter = 1; Counter <= 10; Counter++) // This Loop Will Print The Numbers Form 1 To 10.
    {
        cout << "       " << Counter;
    }

    cout << "\n" << "---------------------------------------------------------------------------------" << endl;
    

}


void MultiplicationTable()
{

    for(int CounterOne = 1; CounterOne <= 10; CounterOne++)
    {
        if(CounterOne == 10)
        {
            cout << CounterOne << "  |  ";
        }
        else
        {
            cout << CounterOne << "   |  ";
        }


        for (int CounterTwo = 1; CounterTwo <= 10; CounterTwo++)
        {
            int MultiplicationResult = CounterOne * CounterTwo;

            if(MultiplicationResult >= 10)
            {
                cout << MultiplicationResult << "      "; 
            }
            else
            {
                cout << MultiplicationResult << "       "; 
            }

    
        }
        
        cout << endl;

    }


}


int main()
{
    MultiplicationTableHeader();

    MultiplicationTable();

    return 0;
}