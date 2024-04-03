#include <cstdlib>
#include <iostream>


using namespace std;


int RandomNumberInRange(int From, int To)
{
    return rand() % (To - From - 1) + From;
}


int main()
{
    
    srand((unsigned)time(NULL));

    cout << "Random Small Letter ==> " <<  char(RandomNumberInRange(97, 122) )<< endl;

    cout << "Random Capital Letter ==> " << char(RandomNumberInRange(65, 90)) << endl;
    
    cout << "Random Special Character ==> " <<  char(RandomNumberInRange(33, 47)) << endl;
    
    cout << "Random Digit ==> " <<  RandomNumberInRange(1, 9) << endl;
    

    return 0;
}