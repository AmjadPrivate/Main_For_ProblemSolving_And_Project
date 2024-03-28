#include <iostream>

using namespace std;

void Function(int &a)
{

    a++;


    cout << "Value Of A In Main == " << a << endl;
    cout << "Location Of A In Function 1 == " << &a << endl;


}


int main()
{
    int a = 10;



    cout << "Value Of A In Main == " << a << endl;
    cout << "Location Of A In Main Function == " << &a << endl;

    Function(a);

    return 0;
}