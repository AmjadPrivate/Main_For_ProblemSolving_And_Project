/*

    --> Write A Program To Check If Number Is Perfect Or Not.

*/

#include <iostream>


using namespace std;

enum enIsPerfect { Perfect = 1, NotPerfect};


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


enIsPerfect IsPerfectNumberOrNot(int Number)
{
    int Sum = 0;

    for(int i = 1; i < Number; i++)
    {
        if(Number % i == 0)
        {
            Sum += i;
        
            if(Sum == Number)
            {
                return enIsPerfect::Perfect;
            }

        }
    }

    return enIsPerfect::NotPerfect;

}

void PrintResult(int Number)
{
    cout << endl;
    
    if(IsPerfectNumberOrNot(Number) == enIsPerfect::Perfect)
        cout <<  Number << " Is Perfect Number" << endl;
    else 
        cout <<  Number << " Is Not Perfect Number" << endl;


}

int main()
{
    PrintResult(ReadPositiveNumber("Please Enter A Positive Number? "));

    return 0;
}
