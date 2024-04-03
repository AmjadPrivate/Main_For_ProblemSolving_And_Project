
#include <iostream>


using namespace std;


void SwapTwoNumbers(int *num_one, int *num_two) // Cereating two pointers 
{
    int temp = 0;

    temp = *num_one;

    *num_one = *num_two;

    *num_two =  temp;


}


int main()
{
    
    int a = 10, b = 20;

    cout << "Variables Value Before Swaping: " << endl;
    cout << "A == " << a << endl;
    cout << "B == " << b << endl;

    SwapTwoNumbers(&a, &b);

    cout << "Variables Value After Swaping: " << endl;
    cout << "A == " << a << endl;
    cout << "B == " << b << endl;


    return 0;
}