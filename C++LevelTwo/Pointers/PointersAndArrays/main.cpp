#include <iostream>

using namespace std;


int main()
{

    int arr[5] = {10, 20, 30, 40, 50};

    int * ptr = arr;



    cout << "\nThe Addresses of array elements:" << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << (ptr + i) << endl;
    }

    cout << endl;
    
    cout << "\nThe values of array elements :" << endl;
    
    for(int i = 0; i < 7; i++)
    {
        cout << *(ptr + i) << endl;
    }

    return 0;
}