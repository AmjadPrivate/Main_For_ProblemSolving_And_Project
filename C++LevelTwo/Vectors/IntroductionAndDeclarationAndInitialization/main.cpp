#include <iostream>
#include <vector>

using namespace std;


int main()
{
    // std vector <type of data> VectorName = {values};


    vector <int> vNumbers = {1, 2, 3, 4, 5, 6, 7, 8};

    // cout << "Numbers Vector = ";

    // Ranged Loop. [ This is bad Practice]

    // for(int Number : vNumbers)
    // {
    //     cout << Number << " ";
    // }
    // cout << endl;


    // Ranged Loop. [ This is Good Practice] == By Reference 

    // for(int& Number : vNumbers)
    // {
    //     cout << Number << " ";
    // }
    // cout << endl;
    // cout << endl;


    vector <string> vNames = {"Ahmed", "Gamal", "Amjad", "Ayman", "Yousff", "Mohammed", "Jaber", "Sameer", "Al-Sayed", "Bader"};


    cout << "Print Names Of People: ";

    for(string& Names : vNames)
    {
        cout << Names << ", ";
    }
    cout << endl;

    return 0;
}