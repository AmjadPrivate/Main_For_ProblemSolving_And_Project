/*


    --> Print Multiplication Table Form 1 To 10.


*/


#include <iostream>

using namespace std;

void MultiplicationTableHeader()
{

    cout  << "\n\n\t\t Multiplication Table Form 1 To 10\n";
    cout << endl;
    
    for(int i = 1; i <= 10; i++)
    {
        cout << "\t" << i;
    }

    cout << "\n";

    cout << "-----------------------------------------------------------------------------------\n";

}



int main()
{

    MultiplicationTableHeader();

    return 0;
}