#include <asm-generic/errno.h>
#include <cstdlib>
#include <iostream>


using namespace std;

enum enCharType {SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4};



int RandomNumber(int From, int To)
{
    int RandomNumber = 0;

    RandomNumber = rand() % (To - From + 1) + From;


    return RandomNumber;
}

char GetRandomCharacter(enCharType CharType) // This Function Gives You {Random Small Letter, Random Capitl Letter, Random Special Character, Random Digit }
{

    switch (CharType) 
    {
        case enCharType::SmallLetter:
        {

            return char(RandomNumber(97, 122));
            break;
        
        }
        case enCharType::CapitalLetter:
        {
        
            return char(RandomNumber(65, 90));
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
            return char(0);
    }


}

int main()
{
    
    srand((unsigned)time(NULL));

    cout <<"\n";

    cout << GetRandomCharacter(enCharType::SmallLetter) << endl;
    cout << GetRandomCharacter(enCharType::CapitalLetter) << endl;
    cout << GetRandomCharacter(enCharType::SpecialCharacter) << endl;
    cout << GetRandomCharacter(enCharType::Digit) << endl;  


    return 0;
}