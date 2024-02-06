#include <iostream>
#include <cstdlib>

using namespace std;


/*

    --> Write A Program How Many Keys To Generate And Print Them On The Screen.

*/

enum enCharType {SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4};


int ReadPositiveNumber(string Message)
{

    int Number = 0;

    do {
        
        cout << "\n" << Message << endl;
        cin >> Number;


    }
    while (Number <= 0);
    

    return Number;

}


int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}


char GetRandomCharacter(enCharType CharType)
{

    switch (CharType) 
    {
        
        case enCharType::CapitalLetter:
        {
            return char(RandomNumber(65, 90));
            break;
        }
        case enCharType::SmallLetter:
        {
            return char(RandomNumber(97, 122));
            break;
        }
        case enCharType::SpecialCharacter:
        {
            return char(RandomNumber(33, 47));
            break;
        }
        case enCharType::Digit:
        {
            return char(RandomNumber(48, 57));
            break;
        }
        default:
        {

            return 0;

        }

    }



}


string GenerateWord(short Length, enCharType CharType)
{

    string Word = "";

    for(int i = 1; i <= Length; i++)
    {

        Word += GetRandomCharacter(CharType);

    }

    return Word;
}   


string GenerateKey()
{
    string Key = "";


    Key = GenerateWord(4, enCharType::CapitalLetter) + "-";
    Key += GenerateWord(4, enCharType::CapitalLetter)  + "-";
    Key += GenerateWord(4, enCharType::CapitalLetter)  + "-";
    Key += GenerateWord(4, enCharType::CapitalLetter);



    return Key;
}


void GenerateKeys(int NumberOfKeys)
{

    cout << "\n";
    for(int i = 1; i <= NumberOfKeys; i++)
    {

        cout << "Key [" << i << "] : ";
        cout << GenerateKey() << endl;

    }

    cout << endl;
}


int main()
{

    srand((unsigned) time (NULL));
 

    GenerateKeys(ReadPositiveNumber("How Many Keys Do You Want To Generate?? "));

    return 0;
}