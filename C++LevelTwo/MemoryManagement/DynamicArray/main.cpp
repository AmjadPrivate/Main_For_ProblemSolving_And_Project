#include <iostream>


using namespace std;


// Dynamic Array.

int main()
{

    int Num = 0;

    cout << "Enter Total Number Of Students: " << endl;
    cin >> Num;

    float* prt;

    // Memory Allocation Of Number Of Floats.

    prt = new float[Num];

    cout << "Enter grades of students: " << endl;
    for(int i = 0; i < Num; i++)
    {

        cout << "Student " << i + 1 << " : ";
        cin >> *(prt + i);

    }

    cout << "Displaying grades of students. : " << endl;;
    cout << endl;
    for(int i = 0; i < Num; i++)
    {

        cout << "Student " << i + 1 << " : " << *(prt + i) << endl;
    
    }


    // prt is released
    delete [] prt;



    return 0;
}