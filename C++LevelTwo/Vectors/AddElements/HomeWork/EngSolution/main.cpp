#include <iostream>
#include <vector>

using namespace std;


void ReadNumbers(vector <int> & vNumber)
{
    char ReadMore = 'Y';
    int Number = 0;


    while (ReadMore == 'Y' || ReadMore == 'y')
    {
        cout << "Please Enter A Number: ";
        cin >> Number;

        vNumber.push_back(Number);


        cout << "Do You Want To Read More Numbers? Y/N: ";
        cin >> ReadMore;

    }

}


void PrintVectorNumbers(vector <int> & vNumber)
{

    cout << "\n\nThe Numbers You Entered Is ==> ";

    for(int & Number : vNumber)
    {
        cout << Number << " ";
    }
    cout << endl;
    
}




int main()
{

    vector <int> vNumber;

    ReadNumbers(vNumber);

    PrintVectorNumbers(vNumber);




    return 0;
}
