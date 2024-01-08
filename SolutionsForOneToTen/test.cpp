#include <iostream>

using namespace std;


int main()
{
    int Number = 0;
    cout << "enter a number? " << endl;
    cin >> Number;



    int  Remiander = 0;

    while (Number != 0)
    {
        Remiander = Remiander * 10 + Number % 10;

        Number = Number / 10;

        


    }
        cout << Remiander << endl;
    



    return 0;
}