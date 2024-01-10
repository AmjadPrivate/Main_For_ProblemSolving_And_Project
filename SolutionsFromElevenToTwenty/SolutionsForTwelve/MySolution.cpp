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

void PrintInvertedPattern(int Number)
{

    for(int i = Number; i >= 1; i--)
    {

        for(int j = i; j >= 1; j--)
        {
            cout << i ;
        }

        cout << endl;
    }


}

int main()
{

    PrintInvertedPattern(ReadPositiveNumber("Please Enter A Positive Number? "));

    return 0;
}