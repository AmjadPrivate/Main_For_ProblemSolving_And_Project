#include <iostream>

using namespace std;

struct stEmployee 
{

    string FristName = "";
    string LastName = "";
    short Age = 0;
    float Salary = 0;
    string DomainName = "";
    bool MarreidStatus = 0;
    string ID = "";
    char Gender = 'F';

};



int main()
{

    stEmployee Employee, *prt;

    Employee.FristName = "Amjad";
    Employee.LastName = "Al-Sayed";

    cout << Employee.FristName << endl;
    cout << Employee.LastName << endl;

    prt = &Employee;

    prt->Age = 12;

    cout << "Print Strcture With Pointer : " << endl;   
    cout << prt->FristName << endl;
    cout << prt->LastName << endl;
    cout << prt->Age << endl;



    return 0;
}