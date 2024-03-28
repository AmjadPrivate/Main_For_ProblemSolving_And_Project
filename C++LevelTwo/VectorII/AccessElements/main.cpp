#include <iostream>
#include <vector>

using namespace std;


int main()
{
    vector <int> num { 1, 2, 3, 4, 5};

    cout << "\n\n Print Elements Using .at(i) \n";
    cout << "Element at Index 0 " << num.at(0) << endl;
    cout << "Element at Index 1 " << num.at(1) << endl;
    cout << "Element at Index 2 " << num.at(2) << endl;
    cout << "Element at Index 3 " << num.at(3) << endl;
    cout << "Element at Index 4 " << num.at(4) << endl;
    cout << "Element at Index 5 " << num.at(5) << endl; // If you get out of range the compiler will gives you an excption.


    cout << "\n\n Print Elements Index[i] \n";
    cout << "Element at Index 0 " << num[0] << endl;
    cout << "Element at Index 1 " << num[1] << endl;
    cout << "Element at Index 2 " << num[2] << endl;
    cout << "Element at Index 3 " << num[3] << endl;
    cout << "Element at Index 4 " << num[4] << endl;
    cout << "Element at Index 5 " << num[5] << endl; // Here, the app will run but the value of index 5 it will be a garbage value.    


    return 0;
}