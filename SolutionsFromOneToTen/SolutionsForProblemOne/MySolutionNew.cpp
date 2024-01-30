/*


    --> Print Multiplication Table Form 1 To 10.


*/


#include <iostream>

using namespace std;

void MultiplicationHeader(int From, int To)
{

    cout  << "\n\n\t\t Multiplication Table Form " << From << " To " << To << "\n";
    cout << endl;
    
    for(int i = From; i <= To; i++)
    {
        cout << "\t" << i;
    }

    cout << "\n";

    for(int j = (To - From) * 9; j >= 0; j--)
    {
        cout << "-";
    }

}



int main()
{

    MultiplicationHeader(5, 10);

    return 0;
}