#include <iostream>
#include <iomanip>
using namespace std;

void SetwManipulator() 
{

    cout << "------------|----------------------------------------|------------|" << endl;
    cout << "   Code     |                  Name                  |    Mark    |" << endl;
    cout << "------------|----------------------------------------|------------|" << endl;


    cout << setw(12) << "C101" << "|" << setw(40) << "Introduction To Programming 1" << "|" << setw(12) << "96" << "|" << endl;
    cout << setw(12) << "C102" << "|" << setw(40) << "C++ Level Two" << "|" << setw(12) << "56" << "|" << endl;
    cout << setw(12) << "C12301" << "|" << setw(40) << "Algorethm And Problem Solving" << "|" << setw(12) << "78" << "|" << endl;
    cout << setw(12) << "Cw301" << "|" << setw(40) << "OPP" << "|" << setw(12) << "23" << "|" << endl;
    cout << setw(12) << "C121" << "|" << setw(40) << "Leran Linux System" << "|" << setw(12) << "56" << "|" << endl;


    cout << "------------|----------------------------------------|------------|" << endl;


}

int main() {

  SetwManipulator();

  return 0;
}
