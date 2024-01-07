/*

    --> Write A Program To Check If Number Is Perfect Or Not.

*/

#include <iostream>


using namespace std;

enum enPerfectNumberOrNot { Perfect = 1, NotPerfect};


int ReadPositiveNumber(string Message)
{

    int Number = 0;


    do
    {
        cout << Message << endl;
        cin >> Number;
    }
    while (Number <= 0);
    
    
    return Number;
}


enPerfectNumberOrNot IsPerfectNumberOrNot(int Number)
{
    int Counter = 0;

    for(int i = 1; i <= Number; i++)
    {
        if(Number % i == 0)
        {
            Counter += i;
        
            if(Counter == Number)
            {
                return enPerfectNumberOrNot::Perfect;
            }

        }
    }

    return enPerfectNumberOrNot::NotPerfect;

}

void PrintResult(int Number)
{
    

    if(IsPerfectNumberOrNot(Number) == enPerfectNumberOrNot::Perfect)
        cout <<  Number << "Is Perfect" << endl;
    else 
        cout <<  Number << "Is Not Perfect" << endl;


}

int main()
{
    PrintResult(ReadPositiveNumber("Please Enter A Positive Number? "));

    return 0;
}
