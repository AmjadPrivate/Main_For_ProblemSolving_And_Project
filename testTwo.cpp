#include <iostream>


using namespace std;


int ReadNumber()
{   
    int Number;

    cout << "Please Enter A Number: ";
    cin >> Number;


    return Number;
}


int SumOddNumbersFrom_1_to_N(int N)
{
    int Sum = 0;

    for(int i = 1; i <= N; i++)
    {
        if(i % 2 != 0)
        {
            Sum += i;
        }
    }

    return Sum;

}



int main()
{

    int N = ReadNumber();

    cout << "\nSum Odd Numbes Form 1 To " << N << " Is: "  << SumOddNumbersFrom_1_to_N(N) << endl;



    return 0;
}