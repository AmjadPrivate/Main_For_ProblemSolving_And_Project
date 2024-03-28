#include <iostream>
#include <vector>

using namespace std;


int ReadNumber()
{
    int Number;

    cout << "Enter A Number? ";
    cin >> Number;

    return Number;
}

bool AddMore()
{
    char AddMore = 'n';

    cout << "Do You Want Add More ? Y/N: ";
    cin >> AddMore;

    return (AddMore == 'N' || AddMore == 'n') ? false : true; 
}



int main()
{
    vector <int> vNumber;

    do
    {
        vNumber.push_back(ReadNumber());

    }
    while (AddMore());

    cout << endl;

    cout << "The Numbers You Entered Is ==> ";

    for(int & Number : vNumber)
    {
        cout << Number << " ";
    }
    cout << endl;
    


    return 0;
}
