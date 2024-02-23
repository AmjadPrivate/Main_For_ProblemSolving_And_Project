#include <cstddef>
#include <iostream>
#include <math.h>
#include <cstdlib>


using namespace std;

enum enQuestionsLevel {Easy =1, Med =2, Hard =3, Mix =4};

enum enOperationTypes {Add =1, Sub = 2, Mul =3, Div = 4, MixOf = 4};

enum enCheckAnswer {True = 1, Wrong = 2};

enum enPassOrFail {Pass = 1, Fail = 2};

struct stFinalResult
{
    short NumberOfQuestions = 0;
    enQuestionsLevel QuestionsLevel;
    enOperationTypes OperationTypes;
    short NumberOfRightAnswer;
    short NumberOfWrongAnswer;

};

struct stQuestionInfo
{
    short NumberOfQuestion = 0;
    short NumberOne = 0;
    short NumberTwo = 0;
    enQuestionsLevel QuestionsLevel;
    enOperationTypes OperationTypes;
    enCheckAnswer CheckAnswer;
    char OT;
    short Answer = 0;
    short NumberOfRightAnswers = 0;
    short NumberOfWrongAnswers = 0;

};

int GetRandomNumber(short From, short To)
{
    short RandomNumber = rand() % (To - From + 1) + From;

    return RandomNumber;
}


short ReadHowMayQuestions()
{
    short Number;

    do 
    {

        cout << "How Many Questions Do You Want To Answer 1 To 100: ";
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
        cout << "Enter Operation Type [1] Add, [2] Sub, [3] Mul, [4] Div [5] Mix ? ";
        cin >> OT;
    
    }
    while (OT < 1 || OT > 5);

    return enOperationTypes(OT);
}


// I Will Use This Function For Make Questions
 int GetNumberAccordingToDifficulty(enQuestionsLevel QuestionsLevel)
 {
     switch (QuestionsLevel)
     {
         case enQuestionsLevel::Easy:
         {
             return GetRandomNumber(1,10);
             break;
         }
         case enQuestionsLevel::Med:
         {
             return GetRandomNumber(10, 30);
             break;
         }
         case enQuestionsLevel::Hard:
         {
             return GetRandomNumber(20, 60);
            break;
         }
        default: //  Means Mix
         {
             return GetRandomNumber(6, 120);
             break;
         }
     }

 }


 char OperationCharacter(enOperationTypes OT)
 {

     switch (OT)
     {
         case enOperationTypes::Add:
         {
             return '+';
             break;
         }
         case enOperationTypes::Sub:
         {
             return '-';
             break;
         }
         case enOperationTypes::Mul:
         {
             return 'x';
            break;
         }
         default: 
         {
             return '/';
             break;
         }

     }


 }


void QuestionStyle(short Num1, short Num2, char OT)
{
    cout << Num1 << endl;
    cout << "\n" << Num2 << " " << OT << endl;
    cout << "------------\n";
}


short SolveQuestion(short Num1, short Num2, enOperationTypes OT)
{

    switch (OT)
    {
        case enOperationTypes::Add:
        {
            return Num1 + Num2;
            break;
        }
        case enOperationTypes::Sub:
        {
            return Num1 - Num2;
            break;
        }
        case enOperationTypes::Mul:
        {
            return Num1 * Num2;
            break;
        }
        case enOperationTypes::Div:
        {
            return Num1 / Num2;
            break;
        }
        default:
            return 0; // Something Wrong.
    }

}


enCheckAnswer CheckAnswer(short TheRightAnswer, short& UserAnswer)
{

    if(UserAnswer == TheRightAnswer)
    {
        return enCheckAnswer::True;
    }
    else
    {
        UserAnswer = TheRightAnswer;
        return enCheckAnswer::Wrong;
    }

}

void AnswerOfQuestion(short TheRightAnswer, enCheckAnswer CheckAnswer)
{
    if(CheckAnswer == enCheckAnswer::True)
    {
        cout <<"\nRight Answer :--) \n";
    }
    else
    {
        cout <<"\nWrong Answer :--( \n";
        cout << "The Right Answer Is " << TheRightAnswer << endl;

    }


}


stFinalResult FillFinalResult(stQuestionInfo QuestionsInfo)
{
    stFinalResult FinalResult;

    FinalResult.NumberOfQuestions = QuestionsInfo.NumberOfQuestion;
    FinalResult.QuestionsLevel = QuestionsInfo.QuestionsLevel;
    FinalResult.OperationTypes = QuestionsInfo.OperationTypes;
    FinalResult.NumberOfRightAnswer = QuestionsInfo.NumberOfRightAnswers;
    FinalResult.NumberOfWrongAnswer = QuestionsInfo.NumberOfWrongAnswers;

    return FinalResult;
}


stFinalResult PlayMathGame(short QuestionNumbers)
{

    stQuestionInfo QuestionInfo;

    QuestionInfo.NumberOfQuestion = QuestionNumbers;
    QuestionInfo.QuestionsLevel = ReadQuestionsLevel();
    QuestionInfo.OperationTypes = ReadOperationType();



    for(int QuestionNum  = 1; QuestionNum <= QuestionNumbers; QuestionNum++)
    {
        cout << "\nQuestions [" << QuestionNum << "/" << QuestionNumbers << "]" << endl;

        // If Operation Type Is Mix
        if(QuestionInfo.OperationTypes == enOperationTypes::MixOf)
        {
            enOperationTypes OPType;

            OPType = (enOperationTypes)GetRandomNumber(1, 4);
        }



        QuestionInfo.NumberOne = GetNumberAccordingToDifficulty(QuestionInfo.QuestionsLevel); // Get Random Number According Thd Difficulty
        QuestionInfo.NumberTwo = GetNumberAccordingToDifficulty(QuestionInfo.QuestionsLevel); // Get Random Number According Thd Difficulty
        QuestionInfo.OT = OperationCharacter(QuestionInfo.OperationTypes); // Character Of Operation.

        QuestionStyle(QuestionInfo.NumberOne, QuestionInfo.NumberTwo, QuestionInfo.OT);
        cin >> QuestionInfo.Answer;

        QuestionInfo.CheckAnswer = CheckAnswer(SolveQuestion(QuestionInfo.NumberOne, QuestionInfo.NumberTwo, QuestionInfo.OperationTypes), QuestionInfo.Answer);
        AnswerOfQuestion(QuestionInfo.Answer, QuestionInfo.CheckAnswer);


        if(QuestionInfo.CheckAnswer == enCheckAnswer::True)
            QuestionInfo.NumberOfRightAnswers++;
        else
            QuestionInfo.NumberOfWrongAnswers++;

    }

    return FillFinalResult(QuestionInfo);
}





string FinalResultIs(short RightAnswers, short WrongAnswers)
{
    if(RightAnswers > WrongAnswers)
    {
        return "The Final Result Is PASS :--)";
    }
    else if(WrongAnswers > RightAnswers)
    {
        return "The Final Result Is FAIL :--(";
    }
    else
    {
        return "The Final Result Is Draw :--)";
    }
}

string NameOfLevels(enQuestionsLevel QL)
{
    string LevelName[4] = {"Easy", "Med", "Hard", "Mix"};

    return LevelName[QL - 1];
}

string NameOfOperation(enOperationTypes OT)
{
    string OperationNmaes[5] = {"Add", "Sub", "Mul", "Div", "Mix"};

    return OperationNmaes[OT - 1];
}

string Taps(short NumberOfTaps)
{
    string t = "";

    for(int i = 1; i <= NumberOfTaps; i++)
    {
        t = t + "\t";
        cout << t;
    }

    return t;
}

void PrintFinalResult(stFinalResult FinalResult)
{
    cout << Taps(3) << "---------------------\n";

    cout << Taps(3) << FinalResultIs(FinalResult.NumberOfRightAnswer, FinalResult.NumberOfWrongAnswer) << endl;

    cout << Taps(3)  <<  "---------------------\n";

    cout << Taps(3) << "Number Of Questions  : " << FinalResult.NumberOfQuestions << endl;
    cout << Taps(3) << "Questions Level        : " << NameOfLevels(FinalResult.QuestionsLevel) << endl;
    cout << Taps(3) << "OP Type                : " << NameOfOperation(FinalResult.OperationTypes)<< endl;
    cout << Taps(3)  << "Number Of Write Answer : " << FinalResult.NumberOfRightAnswer << endl;
    cout << Taps(3) << "Number Of Wrong Answer : " << FinalResult.NumberOfWrongAnswer << endl;

    cout << Taps(3) << "---------------------\n";



}

bool PlayAgain()
{
    char Choice = 'Y';

    cout << Taps(3)<< "Do You Want Play Again Y/N ";
    cin >> Choice;


    return (Choice == 'Y') || (Choice == 'y');
}


void StartGame()
{


    do
    {
        stFinalResult FinalResult = PlayMathGame(ReadHowMayQuestions());

        PrintFinalResult(FinalResult);

    }
    while (PlayAgain());



}



int main()
{
    srand((unsigned) time (NULL));

    StartGame();

    return 0;
}