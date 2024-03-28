#include <iostream>


using namespace std;


int main()
{
    // Declare An Int Pointer
    int* prtX;

    // Declare A Float Pointer
    float* prtY; 

    // Dynamically Allocate Memory
    prtX = new int;
    prtY = new float;

    // Assigning Value To The Memory
    *prtX = 45;
    *prtY = 45.678f;

    // Print The Numbers Location.
    cout << endl;
    cout << prtX << endl; 
    cout << prtY << endl;



    // Print The Numbers Value.
    cout << endl;
    cout << *prtX << endl; 
    cout << *prtY << endl;

    // Deallocate The Memory.
    delete prtX;
    delete prtY; 







    return 0;
}