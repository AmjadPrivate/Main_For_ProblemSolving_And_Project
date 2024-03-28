#include <iostream>

using namespace std;


int main()
{

    int arr[4] = {10, 20, 30, 40};

    int *prt;
    prt = arr;

    // prt Is Equivalent to &arr[0];
    // prt + 1 Is Equivalent to &arr[1];
    // prt + 2 Is Equivalent to &arr[2];
    // prt + 3 Is Equivalent to &arr[3];


    cout << "Addresses Are: \n" <<  endl;

    cout << prt << endl;
    cout << prt + 1<< endl;
    cout << prt + 2<< endl;
    cout << prt + 3<< endl;
    
    cout << "\nValues Are: " << endl;


    cout << *(prt) << endl;
    cout << *(prt + 1) << endl;
    cout << *(prt + 2) << endl;
    cout << *(prt + 3) << endl;

    // cout << "Addresses Are: \n" <<  endl;

    // for(int i = 0; i <= 3; i++)
    // {
    //     cout << prt + i << endl;
    // }


    // cout << "\nValues Are: " << endl;

    // for(int i = 0; i <= 3; i++)
    // {
    //     cout << *( prt + i) << endl;
    // }



    return 0;
}