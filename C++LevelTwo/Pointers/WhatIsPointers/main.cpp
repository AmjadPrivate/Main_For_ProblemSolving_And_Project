#include <iostream>


using namespace std;


int main()
{
    int a = 10;

    cout << endl;
    cout << "\'A\' Value Is     : " << a << endl;
    cout << "\'A\' Address Is   : " << &a << endl;

    int * p;
    p = &a;
    cout << endl;
    cout << "\'P\' Value Is    : " << p << endl;
    cout << "\'P\' Address Is  : " << &p << endl;

    return 0;
}