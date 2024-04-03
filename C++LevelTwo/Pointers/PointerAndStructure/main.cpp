#include <iostream>

using namespace std;

struct stEmployee 
{
    string Nmae = "";
    float Salary = 0;
};




int main()
{

    stEmployee Employee1, *ptr;


    Employee1.Nmae = "Amjad Al-Sayed";
    Employee1.Salary = 100000.5;

    cout << endl;
    cout << "Employee Name "<< Employee1.Nmae << " Before Chenging" << endl;
    cout << "Employee Salary  "<< Employee1.Salary << " Before Chenging" << endl;

    ptr = &Employee1;


    cout << endl;
    ptr->Nmae = "Amjad AlSayed";
    ptr->Salary = 200000.7;


    cout << "Employee Name "<< Employee1.Nmae << " After Chenging" << endl;
    cout << "Employee Salary  "<< Employee1.Salary << " After Chenging" << endl;


    return 0;
}