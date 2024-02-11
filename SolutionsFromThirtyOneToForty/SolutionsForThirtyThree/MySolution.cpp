#include <iostream>


using namespace std;

int ReadNumberInRange(int From, int To, string Message)
{
    int Number = 0;

    do 
    {
        
        cout << Message << endl;
        cin >> Number;

    }while (Number < From ||   Number > To);



    return Number;
}


int RandomNumber(int From, int To)
{
    int RandomNumber = rand() % (To - From + 1) + From;

    return RandomNumber;    
}

enum enCharacterType {SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4};

// Gives Random Character And Digits And Special Character.
char GetRandomCharacter(enCharacterType CharacterType)
{
    switch (CharacterType)
    {

        case enCharacterType::CapitalLetter:
        {
            return char(RandomNumber(65, 90));
            break;
        }
        case enCharacterType::SmallLetter:
        {
            return char(RandomNumber(97, 122));
            break;
        }
        case enCharacterType::SpecialCharacter:
        {
            return char(RandomNumber(33, 47));
            break;
        }
        case enCharacterType::Digit:
        {
            return char(RandomNumber(48, 57));
            break;
        }
        default:
        {
            return char(0);
        }
    }

}


string GetRandomWord(int WordLength, enCharacterType CharacterType)
{
    string Word = "";

    for(int i = 1; i <= WordLength; i++)
    {
        Word = Word + GetRandomCharacter(CharacterType);
    }

    return Word;
}



// Generat Keys Function, This Functio Need [Get Random Funciton And Word Length, KeyType(Means Key Character) ]
string GeneratKey(enCharacterType KeyType, int WordLength)
{
    string Key = "";


    for(int i = 1; i <= WordLength; i++)
    {
        if(i == WordLength)
        {

            Key += GetRandomWord( WordLength, KeyType);
        }
        else {
             Key += GetRandomWord( WordLength, KeyType) + "-";
        
        }
            
        
    }

    
    return Key;
}



void FillArrayWithKeys(string Array[100] ,int ArrayLength)
{
    

    for(int i = 0; i < ArrayLength; i++)
    {
        Array[i] = GeneratKey(enCharacterType::CapitalLetter, 4);
    }


}


void PrintStringArray(string Array[100], int ArrayLength)
{

    cout << "\n";

    for(int i = 0; i < ArrayLength; i++)
    {

        cout << "Array [" << i << "]: "<< Array[i] << endl;

    }

    cout << endl;

}


int main()
{
    srand((unsigned) time (NULL));

    string arr[100];
    int ArrayLength = 0;

    ArrayLength = ReadNumberInRange(1 , 100, "Enter How Many Keys Do You Want To Generat: \n"); // Max Size Of Array.
    
    // Fill Array With Keys 
    FillArrayWithKeys(arr, ArrayLength);

    // Print Array.
    cout << "\nArray Elements: \n";
    PrintStringArray(arr, ArrayLength);



    return 0;
}