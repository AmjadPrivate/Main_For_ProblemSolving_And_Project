#include <iostream>


using namespace std;

void printAllLettersFrom_AAA_To_ZZZ()
{

    cout << "\n";

    string Word = "";



    for(int i = 65; i <= 90; i++)
    {

        for(int j = 65; j <= 90; j++)
        {
            
            for(int k = 65; k <= 90; k++)
            {

                Word = Word + char(i);
                Word = Word + char(j);
                Word = Word + char(k);

                cout << Word << endl;

                Word = "";

            }


        }


    }
    

    cout << "-------------------\n";


}


int main()
{
    printAllLettersFrom_AAA_To_ZZZ();

    return 0;
}