#include <cstdio>
#include <iostream>
#include <vector>

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



void AddEmployee(vector<stEmployee> &Employee) 
{

    stEmployee TempEmployee;
    static short NumbersOfEmployees = 1;

    cout << endl;
    printf("Enter Employee %*d Information: \n", 2 ,NumbersOfEmployees);

    cout << endl;
    cout << "Employee First Name : ";
    cin >> TempEmployee.FristName;

    cout << endl;
    cout << "Employee Last Name : ";
    cin >> TempEmployee.LastName;

    cout << endl;
    cout << "Employee Age : ";
    cin >> TempEmployee.Age;

    cout << endl;
    cout << "Employee Domain Name : ";
    cin >> TempEmployee.DomainName;

    cout << endl;
    cout << "Employee Salary : ";
    cin >> TempEmployee.Salary;
    

    cout << endl;
    cout << "Marreid Status [1]Trur [0]False : ";
    cin >> TempEmployee.MarreidStatus;

    cout << endl;
    cout << "Employee ID : ";
    cin >> TempEmployee.ID;

    cout << endl;
    cout << "Employee Gender F/M : ";
    cin >> TempEmployee.Gender;

    NumbersOfEmployees++;
    
    Employee.push_back(TempEmployee);

}

bool AddMoreEmployee()
{
    char AddMore = 'y';

    cout << "Do You Want Add Morr Employee Y/N : ";
    cin >> AddMore;

    return (AddMore == 'y' || AddMore == 'Y') ? true : false;
}

void AddEmployees(vector<stEmployee> &Employee) {

    do
    {

        AddEmployee(Employee);

    }
    while(AddMoreEmployee());
    

}

void PrintEmployees(vector<stEmployee> &Employees)
{
    static short EmployeeCounter = 1;

    for (stEmployee &Employee : Employees) 
    {   
        cout << endl;
        cout << "-------------------------------------\n";
        printf("Employee %*d Information \n\n", 2, EmployeeCounter);

        cout << "Employee ID          : " << Employee.ID << endl;

        cout << "First Name           : " << Employee.FristName << endl;
        
        cout << "Last Name            : " << Employee.LastName << endl;
        
        cout << "Employee Age         : " << Employee.Age << endl;
        
        cout << "Employee Domain Name : " << Employee.DomainName << endl;
        
        cout << "Employee Salary      : " << Employee.Salary << endl;

        (Employee.Gender == 'F' || Employee.Gender == 'f') ? cout << "Gender               : Female\n" : cout << "Gender               : Male\n";

        (Employee.MarreidStatus == true) ? cout << "Marreid Status       : Marreid\n" : cout << "Marreid Status       : Single\n";

        cout << endl;

        EmployeeCounter++;

    }
}


int main() {

    vector<stEmployee> vEmployees;

    AddEmployees(vEmployees);

    PrintEmployees(vEmployees);

  return 0;
}
