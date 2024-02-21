#include <iostream>
#include <math.h>

using namespace std;


float GetFractionPart(int Number)
{
	return Number - int(Number);
}


int MyRound(float Number)
{

	int IntegerPart;
	IntegerPart = (int)Number; // Example 10.7 ==> The Value In Interger Part Is = 10 


	float FractionPart = GetFractionPart(Number); // Example 10.7 ==> The Value In Fraction Part Is = .7	

	if(abs(FractionPart) >= .5)
	{
		if(Number < 0)
		{
			return --IntegerPart;
		}
		else	
		{
			return ++IntegerPart;
		}
	}
	else
	{
		return IntegerPart;
	}


}


float ReadNumber()
{
    float Number = 0;

    cout << "Plase Enter A Float Number? " << endl;
    cin >> Number;

    return Number;
}


int main()
{
	float Number = ReadNumber();


	cout << "\n My Round Is " << MyRound(Number) << endl;

	cout << "\n C++ Round Is " << round(Number) << endl;


	return 0;
}
