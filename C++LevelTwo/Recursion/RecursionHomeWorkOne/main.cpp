#include <iostream>

using namespace std;

void PrintReversedNumbers(int N, int M)
{

    if(M >= N)
    {
        cout << M << endl;
        PrintReversedNumbers(N, M - 1);
    }

}





int main()
{

    PrintReversedNumbers(1, 10);




    return 0;
}