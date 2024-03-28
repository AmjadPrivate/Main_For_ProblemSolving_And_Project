#include <iostream>

using namespace std;


int main()
{
    float f1 = 10.8;

    void *ptr;

    ptr = &f1;
    

    cout << endl;
    cout << "Address : " << ptr << endl;
    cout << "Value : " << *(static_cast <float*> (ptr)) << endl;
    
    int x = 10;

    ptr = &x;

    cout << endl;
    cout << "Address : " << ptr << endl;
    cout << "Value : " << *(static_cast <int*> (ptr)) << endl;

    char Character = 'A';

    ptr = &Character;

    cout << endl;
    cout << "Address : " << ptr << endl;
    cout << "Value : " << *(static_cast <char*> (ptr)) << endl;




    string pString = "Hi This Is Amjad :)";

    ptr = &pString;

    cout << endl;
    cout << "Address : " << ptr << endl;
    cout << "Value : " << *(static_cast <string*> (ptr)) << endl;




    return 0;
}