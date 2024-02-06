#include <iostream>

using namespace std;

void PrintAllLettersForm_AAA_ZZZ()
{


    for(int i = 65; i <= 90; i++)
    {

        for(int j = 65; j <= 90; j++)
        {

            for(int z = 65; z <= 90; z++)
            {

                cout << char(i) << char(j) << char(z) << endl;

            }

            cout << "----------\n";
        }


    }


}



int main()
{

    PrintAllLettersForm_AAA_ZZZ();

    return 0;
}