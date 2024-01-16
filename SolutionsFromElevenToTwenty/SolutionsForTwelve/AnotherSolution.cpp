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


void PrintInvertedNumberPattern(int Number)
{

    cout << "\n";
    
    for(int i = Number; i >= 1; i--)
    {

        for(int j = i; j >= 1; j--)
        {
            cout << i;
        }

        cout << endl;
    }


}

int main()
{

    PrintInvertedNumberPattern(ReadPositiveNumber("Please Enter A Positive Number? "));

    return 0;
}