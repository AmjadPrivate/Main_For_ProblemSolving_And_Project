#include <iostream>
#include <vector>

using namespace std;


int main()
{

    vector <int> vNumbers;

    vNumbers.push_back(10);
    vNumbers.push_back(20);
    vNumbers.push_back(30);
    vNumbers.push_back(40);
    vNumbers.push_back(50);



    cout << "Number Of Elements: " << vNumbers.size() << endl; 
    vNumbers.clear();

//  cout << "Number Of Elements: " <<
    
    // vNumbers.pop_back();
    // vNumbers.pop_back();
    // vNumbers.pop_back();
    // vNumbers.pop_back();


    // cout << endl;

    // for(int & num : vNumbers)
    // {
    //     cout << num << " ";
    // }
    // cout << endl;


    return 0;
}
