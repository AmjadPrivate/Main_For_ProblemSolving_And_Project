#include <iostream>


using namespace std;


int main()
{
    int a = 10;


    cout << endl;
    cout << "\'A\' Value Is     : " << a << endl;
    cout << "\'A\' Address Is   : " << &a << endl;

    int  * p;
    p = &a;

    cout << endl;
    cout << "\'P\' Value Is    : " << p << endl;
    cout << "\'P\' Address Is  : " << &p << endl;

    cout << "\'A\' Value Is  It Should Be 10   : " << a << endl;

    // Changing Value From Pointer, (*) You Can Call It Key Of Box
    *p = 20;

    cout << endl;
    cout << "\'A\' Value After Changing Form Pointer, And Print It From \'P\' Variable, It Should Be 20 ==  : " << *p << endl;

    a = 30;

    cout << endl;
    cout << "\'A\' Value After Changing Form The Main Variable, And Print It From \'A\' Variable  Is   : " << a << endl;




    return 0;
}