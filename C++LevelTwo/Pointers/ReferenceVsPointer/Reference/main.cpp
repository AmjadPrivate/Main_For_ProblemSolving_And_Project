#include <iostream>

using namespace std;


/*

    == Creating Reference Means == Creat Another Name For Value.

    

*/



int main()
{
    int a = 10;
    int &x = a;

    cout << "Address Of \"A\" Is " << &a << endl; // Will Print blah
    cout << "Address Of \"X\" Is " << &x << endl; // Will Print blah


    cout << "A Value Is " << a << endl; // Will Print 10
    cout << "X Value Is " << x << endl; // Will Print 10


    return 0;
}