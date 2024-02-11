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





string GeneratKey(enCharacterType KeyType, int KeyLength)
{
    string Key = "";

    int Counter = 1; 

    for(int i = 0; i <= KeyLength; i++)
    {

        
        Counter++;

        if(Counter == 4)
        {
            Key = Key + GetRandomCharacter(KeyType) + "-";
            Counter = 1;
        }
        else
        {

            Key = Key + GetRandomCharacter(KeyType);
        
        }

    }

    return Key;
}


void FillArrayWithKeys(string Array[100] ,int &ArrayLength)
{
    ArrayLength = ReadNumberInRange(1 , 100, "Enter How Many Keys: "); // Max Size Of Array.
    
    int KeyLength = ReadNumberInRange(1, 50, "Please Enter The Length Of Key");

    for(int i = 0; i < ArrayLength; i++)
    {
        Array[i] = GeneratKey(enCharacterType::CapitalLetter, KeyLength);
    }


}


void PrintArray(string Array[100], int ArrayLength)
{

    srand((unsigned) time (NULL));


    cout << "\n";

    for(int i = 0; i < ArrayLength; i++)
    {

        cout << "Array [" << i << "]: "<< Array[i] << endl;

    }

    cout << endl;

}


int main()
{
    string arr[100];
    int ArrayLength = 0;
    
    // Fill Array With Keys 
    FillArrayWithKeys(arr, ArrayLength);

    // Print Array.
    cout << "\n Array Elements: ";
    PrintArray(arr, ArrayLength);


    return 0;
}