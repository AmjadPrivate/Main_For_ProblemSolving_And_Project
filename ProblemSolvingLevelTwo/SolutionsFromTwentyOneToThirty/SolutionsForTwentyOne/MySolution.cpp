#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <sys/types.h>

using namespace std;


/*

    --> Write A Program How Many Keys To Generate And Print Them On The Screen.

*/

int ReadPositiveNumber(string Message)
{

    int Number = 0;

    do {
        
        cout << "\n" << Message << endl;
        cin >> Number;


    }
    while (Number <= 0);
    

    return Number;

}


int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

string GenerateKey()
{

    string Key = "";

    for(int i = 1; i <= 4; i++)
    {

        for(int j = 1; j <= 4; j++)
        {
            Key += RandomNumber(65, 90);
        }

        if(i == 4)
        {
            break;
        }

        Key += "-";
    }

    return Key;
}

void PrintGeneratedKeys(int NumberOfKeys)
{

    cout << endl;
    
    for(int i = 1; i <= NumberOfKeys; i++)
    {
        cout << "Key [" << i << "] : " << GenerateKey() << endl;
    }

    cout << endl;
}

int main()
{

    srand((unsigned) time (NULL));
 

    PrintGeneratedKeys(ReadPositiveNumber("How Many Keys Do You Want To Generate?? "));

    return 0;
}