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

    // First Element In The Vector.
    cout << "First Element " <<  vNumbers.front() << endl;

    // Last Element In The Vector.
    cout << "Last Element " <<  vNumbers.back() << endl;

    // Size
    cout << "Size Of Vector " << vNumbers.size() << endl;

    // Capacity
    cout << "Capacity " << vNumbers.capacity() << endl;

    // Empty
    cout << "Is Vector Empty [1]Yes [0]No " << vNumbers.empty() << endl;






    return 0;
}