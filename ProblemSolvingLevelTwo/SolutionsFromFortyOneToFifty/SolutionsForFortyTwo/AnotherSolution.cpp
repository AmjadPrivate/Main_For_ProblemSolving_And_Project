#include <iostream>


using namespace std;


int RandomNumber(int From, int To)
{
    int RandomNumber = rand() % (To - From + 1) + From;

    return RandomNumber;    
}


void FillArrayWithRandomNumbers(int arr[100], int& ArrayLength)
{

    cout  << "\nEnter Number Of Elements: \n";
    cin >> ArrayLength;


    for(int i = 0; i < ArrayLength; i++)
        arr[i] = RandomNumber(1, 100);

}



short CountOddNumbers(int arr[100], int ArrayLength)
{
	int Counter = 0;


	for(int i = 0; i < ArrayLength; i++)
	{
		if(arr[i] % 2 != 0)
		{
			Counter++;
		}
	}



	return Counter;
}


void PrintArray(int Array[100], int ArrayLength)
{
        
    for(int i = 0; i < ArrayLength; i++)
        cout << Array[i] << " ";

    

    cout << endl;
    
}


int main()
{

    srand((unsigned) time (NULL));

	int arr[100], ArrayLength = 0;


	FillArrayWithRandomNumbers(arr, ArrayLength);

	cout << "\nArray Elements: ";
	PrintArray(arr, ArrayLength);


	cout << "\nOdd Numbers Count Is: " << CountOddNumbers(arr,  ArrayLength) << endl;

	return 0;
}
