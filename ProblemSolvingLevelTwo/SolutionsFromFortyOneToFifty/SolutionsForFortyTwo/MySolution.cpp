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


bool IsOddNumber(int Number)
{
	return Number % 2 != 0; 
}


short HowManyOddNumbersInArray(int arr[100], int ArrayLength)
{
	int OddNumbers = 0;


	for(int i = 0; i < ArrayLength; i++)
	{
		if(IsOddNumber(arr[i]))
		{
			OddNumbers++;
		}
	}



	return OddNumbers;
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


	cout << "\nOdd Numbers Count Is: " << HowManyOddNumbersInArray(arr,  ArrayLength) << endl;

	return 0;
}
