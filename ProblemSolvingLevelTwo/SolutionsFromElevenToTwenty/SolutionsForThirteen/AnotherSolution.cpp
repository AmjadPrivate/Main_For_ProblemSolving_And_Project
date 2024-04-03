#include <iostream>


using namespace std;


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


void PrintNumbersPattern(int Number)
{

    cout << "\n";

    for(int i = 1; i <= Number; i++)
    {

        for(int j = 1; j <= i; j++)
        {
            cout << i ;
        }


        cout << endl;
    }


}

int main()
{
    PrintNumbersPattern(ReadPositiveNumber("Please Enter A Positive Number? "));


    return 0;
}