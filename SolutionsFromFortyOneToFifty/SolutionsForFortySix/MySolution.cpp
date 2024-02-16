#include <iostream>
#include <math.h>

using namespace std;

float ReadNumber()
{
    float Number = 0;

    cout << "\nPlease Enter A Number: \n";
    cin >> Number;
    
    
    return Number;
}


float MyAbs(float &Number)
{

	if(Number > 0)
	{
		return Number;
	}
	else
	{
 		return Number * -1;
	}

}



int main()
{

	float Number = ReadNumber();


	cout << "My Abs Result: " << MyAbs(Number) << endl;
	cout << "C++ Abs: Result: " << abs(Number) << endl;




    return 0;
}