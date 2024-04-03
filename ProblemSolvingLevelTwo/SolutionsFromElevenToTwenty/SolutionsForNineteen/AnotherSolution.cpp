#include <iostream>
#include <cstdlib>

using namespace std;

int RandomNumber(int From, int To)
{
    int RandomNumber = 0;

    RandomNumber = rand() % (To - From + 1) + From;


    return RandomNumber;
}

int main()
{
    srand((unsigned)time(NULL));

    int From = 10;
    int To = 1000;

    cout << "Random Number From " << From << " To " << To <<  " ==> " << RandomNumber(From, To)  << endl;
    cout << "Random Number From " << From << " To " << To <<  " ==> " << RandomNumber(From, To)  << endl;
    cout << "Random Number From " << From << " To " << To <<  " ==> " << RandomNumber(From, To)  << endl;
    

    

    

    return 0;
}