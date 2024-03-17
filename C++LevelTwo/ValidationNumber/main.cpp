#include <iostream>
#include "Mylib.h"

using namespace std;
using namespace Inputs;


int main()
{
    string Message = "Please Enter A Number:";
    string MessageInCaseInvalidNumber = "Invalid Number, Please Enter Invalid One ";

    int Number1 = ReadIntegerNumber(Message + "One", MessageInCaseInvalidNumber);
    int Number2  = ReadIntegerNumber(Message + "Two", MessageInCaseInvalidNumber);


    cout << "Number " << Number1 << " + Number " << Number2 << " == " << Number1 + Number2 << endl;  


    return 0;
}