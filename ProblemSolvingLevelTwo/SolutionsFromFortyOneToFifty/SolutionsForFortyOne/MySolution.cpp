#include <iostream>


using namespace std;


enum enIsPalindromNumber {PalindormNumber = 1, NotPalindormNumber =2};



// Fill Array Hard Coding
void FillArray(int arr[100], int& ArrayLengt)
{
	ArrayLengt = 7;

	arr[0] = 10,
	arr[1] = 20,
	arr[2] = 30,
	arr[3] = 30,
	arr[4] = 30,
	arr[5] = 20,
	arr[6] = 10;

}


void ReverseArrayInAnotherOrder(int ArraySource[100], int ArrayDestination[100], int SourceLenght)
{

	for(int i = 0; i < SourceLenght; i++)
	{
		ArrayDestination[i] = ArraySource[SourceLenght - 1 - i];

	}


}


enIsPalindromNumber IsPalindromNumber(int ArraySource[100] , int SourceLenght)
{
	int TempArray[100];
	
	ReverseArrayInAnotherOrder(ArraySource, TempArray, SourceLenght);


	for(int i = 0; i < SourceLenght; i++)
	{

		if(TempArray[i] != ArraySource[i])
		{
			return enIsPalindromNumber::NotPalindormNumber;
		}


	}

	return enIsPalindromNumber::PalindormNumber;

}


void PrintArray(int Array[100], int ArrayLength)
{
        
    for(int i = 0; i < ArrayLength; i++)
        cout << Array[i] << " ";

    

    cout << endl;
    
}




int main()
{
	int arr[100], ArrayLength = 0;

	FillArray(arr, ArrayLength);


	PrintArray(arr, ArrayLength);

	if(IsPalindromNumber(arr, ArrayLength) == enIsPalindromNumber::PalindormNumber)
	{
		cout << "\nYes Array Is Palindorm :)\n";
	}
	else
	{
		cout << "\nNo Array Is Not Palindorm :(\n";
	}

	return 0;
}

