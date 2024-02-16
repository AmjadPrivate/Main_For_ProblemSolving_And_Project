#include <iostream>


using namespace std;


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



bool IsPalindromNumber(int arr[100] , int Length)
{

	for(int i = 0; i < Length; i++)
	{

		if(arr[i] != arr[Length - 1 - i])
		{
			return false;
		}

	}

	return true;
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

	if(IsPalindromNumber(arr,  ArrayLength))
	{
		cout << "\nYes Array Is Palindrom\n";
	}
	else
	{
		cout << "\nNo Array Not Is Palindrom\n";
	}
	
	return 0;
}

