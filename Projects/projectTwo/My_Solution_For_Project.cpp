#include <cstddef>
#include <iostream>
#include <math.h>
#include <cstdlib>


using namespace std;

enum enQuestionsLevel {Easy =1, Med =2, Hard =3, Mix =4};

enum enOperationTypes {Add =1, Sub = 2, Mul =3, Div = 4, MixOf = 4};


struct stFinalResult
{
    short NumberOfQuestions = 0;
    enQuestionsLevel QuestionsLevel;
    enOperationTypes OperationTypes;
    short NumberOfRightAnsewers;
    short NumberOfWrongAnsewers;

};


int GetRandomNumber(short From, short To)
{
    short RandomNumber = rand() % (To - From - 1) - From;

    return RandomNumber;
}


short ReadHowMayQuestions()
{
    short Number;

    do 
    {

        cout << "How Many Questions Do You Want To Ansewer 1 To 100: ";
        cin >> Number;

    
    }
    while (Number < 0 || Number > 100); 


    return Number;
}


enQuestionsLevel ReadQuestionsLevel()
{
    short QL; // Questions Level

    do 
    {
        cout << "Enter Questions Level [1] Easy, [2] Med, [3] Hard, [4]Mix ? ";
        cin >> QL;
    
    }
    while (QL < 1 || QL > 4);

    return enQuestionsLevel(QL);
}


enOperationTypes ReadOperationType()
{
    short OT; // Operation Type

    do 
    {
        cout << "Enter Questions Level [1] Add, [2] Sub, [3] Mul, [4] Div [5] Mix ? ";
        cin >> OT;
    
    }
    while (OT < 1 || OT > 4);

    return enOperationTypes(OT);
}


// int Get_A_NumberAccording_To_TheDifficulty(enQuestionsLevel QuestionsLevel)



stFinalResult PlayMathGame(short QuestionNumbers)
{
    stFinalResult FillFinalResult;

    for(int QuestionNum  = 1; QuestionNum <= QuestionNumbers; QuestionNum++)
    {



    } 


}






bool PlayAgain()
{
    char Choice = 'Y';

    cout << "Do You Want Play Again Y/N ";
    cin >> Choice;


    return (Choice == 'Y') || (Choice == 'y');
}


void StartGame()
{


    do
    {
        stFinalResult FinalResult = PlayMathGame(ReadHowMayQuestions());  
    



    }
    while (PlayAgain());





}



int main()
{


    return 0;
}