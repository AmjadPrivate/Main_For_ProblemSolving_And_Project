
#include <iostream>


using namespace std;



void Swap(int *a, int *b)
{
    int temp = 0;

    temp = *a;
    *a = *b;
    *b = temp;

}

int main()
{
    
    int a = 10, b = 20;

    cout << "Variables Value Before Swaping: " << endl;
    cout << "A == " << a << endl;
    cout << "B == " << b << endl;

    Swap(&a, &b);
    

    cout << "Variables Value After Swaping: " << endl;
    cout << "A == " << a << endl;
    cout << "B == " << b << endl;


    return 0;
}