// #include <iostream>

// using namespace std;


// int ReadPositiveNumber(string Message)
// {

//     int Number = 0;


//     do
//     {
//         cout << Message << endl;
//         cin >> Number;
//     }
//     while (Number <= 0);
    
    
//     return Number;
// }


// int DeleteUsedDigit( int Number, int UsedDigit)
// {
//     int Remainder = 0, TheNewNumber = 0;

//     while (Number != 0)
//     {

//         Remainder = Number % 10;
//         Number = Number / 10;
        

//         if(Remainder != UsedDigit)
//         {
//             TheNewNumber = TheNewNumber * 10;   
//             TheNewNumber += Remainder;    
//         }

//     }
    
//     return TheNewNumber;
// }


// int HowManyDigitsINNumber(long long int Number)
// {
//     int Counter = 0;

//     while (Number != 0)
//     {
//         Number = Number / 10;
//         Counter++;
//     }
    

//     return Counter;
// }

// int ReverseNumber(int Number)
// {
//     int Remainder = 0, Sum = 0;


//     while (Number != 0) 
//     {
//         Sum = Sum * 10;

//         Remainder = Number % 10;
//         Number = Number / 10;

//         Sum += Remainder;

//     }

//     return Sum;
// }


// void PrintNumbers(int Number)
// {

//     int Remainder = 0;

//     cout << "\n";
//     while (Number != 0) 
//     {

//         Remainder = Number % 10;
//         Number = Number / 10;

//         cout << Remainder << endl;

//     }

// }


// int main()
// {


//     return 0;
// }



#include <iostream>


using namespace std;


int main()
{

    // int From = 10, To = 20;

    for(int i = 10; i >= 1; i--)
    {
        cout << "-";
    }

    return 0;
}