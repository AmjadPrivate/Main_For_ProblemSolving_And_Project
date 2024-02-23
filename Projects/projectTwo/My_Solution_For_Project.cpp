#include <iostream>
#include <math.h>
#include <cstdlib>


using namespace std;


enum enQuestionsLevel {Easy =1, Med =2, Hard =3, Mix =4};

enum enOperationTypes {Add =1, Sub = 2, Mul =3, Div = 4, MixOf = 5};

enum enAnswerIs {Right = 1, Wrong};

struct stFinalResult
{
    short NumberOfQuestions = 0;
    string QuestionLevel;
    string OPType;
    short NumberOfRightAnswer = 0;
    short NumberOfWrongAnswer = 0;
};


struct stQuestionInfo
{

    short NumberOne = 0;
    short NumberTwo = 0; 
    enQuestionsLevel QuestionLevel;
    enOperationTypes OPType;
    float Answer = 0;
    short NumberOfRightAnswer = 0;
    short NumberOfWrongAnswer = 0;

};


int GetRandomNumber(short From, short To)
{
    short RandomNumber = rand() % (To - From + 1) + From;

    return RandomNumber;
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


short ReadHowMayQuestions()
{
    short Number;

    do 
    {
        cout << endl;
        cout << Taps(2) << "How Many Questions Do You Want To Answer 1 To 100: ";
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
        cout << Taps(2) <<"Enter Questions Level [1] Easy, [2] Med, [3] Hard, [4]Mix ? ";
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
        cout << Taps(2) << "Enter Operation Type [1] Add, [2] Sub, [3] Mul, [4] Div [5] Mix ? ";
        cin >> OT;
    
    }
    while (OT < 1 || OT > 5);

    return enOperationTypes(OT);
}



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
            return GetRandomNumber(20, 120);
        break;
        }
        case enQuestionsLevel::Mix:
        {
            return GetRandomNumber(1, 120);
            break;
        }
        default: // If The Default Happened Means There Is Wrong In The Input
        {
            return 0;
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



void QuestionStyle(short NumberOne, short NumberTwo, char OPCharacter)
{

    cout << Taps(2) << NumberOne << endl;
    cout << endl << Taps(2) << NumberTwo << " " << OPCharacter << endl;
    cout << endl << Taps(2) << "---------------\n";
    
}


float AnswerOfQuestion(short Num1, short Num2, enOperationTypes OT)
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
            return float(Num1) / Num2;
            break;
        }
        default:
            return 0; // Wrong Input.

    }

}



// This Function Is The Most Importent In App, This Will Make Answer And Solve The Answer And Compile The Right Answer And User Answer And Return Right Answer Or Wrong Answer Depend Of User Input 
enAnswerIs MakeQuestion(stQuestionInfo QInfo)
{
    float RightAnswer = 0; 

    // In Case The Operation Type Is Mix
    if(QInfo.OPType == enOperationTypes::MixOf)
    {
        QInfo.OPType = (enOperationTypes)GetRandomNumber(1, 4);
    }

    // Show The Question On The Screen.
    QuestionStyle(QInfo.NumberOne, QInfo.NumberTwo, OperationCharacter(QInfo.OPType));

    // Take Answer From User.
    cout << Taps(2);
    cin >> QInfo.Answer;

    // This Is The Right Answer.
    RightAnswer = AnswerOfQuestion(QInfo.NumberOne, QInfo.NumberTwo, QInfo.OPType);


    if(QInfo.Answer == RightAnswer)
    {
        cout << endl << Taps(2) << "Right Answer :--) \n";
        return enAnswerIs::Right;
    }
    else
    {
        cout << endl << Taps(2) << "Wrong Answer :--( \n";
        cout << endl << Taps(2) << "The Right Answer Is " << RightAnswer << endl;

        return enAnswerIs::Wrong;
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


void FillFinalResult(stQuestionInfo QInfo, stFinalResult& FinalResult)
{

    FinalResult.NumberOfQuestions = QInfo.NumberOfRightAnswer + QInfo.NumberOfWrongAnswer;
    FinalResult.QuestionLevel = NameOfLevels(QInfo.QuestionLevel) ;
    FinalResult.OPType = NameOfOperation(QInfo.OPType);
    FinalResult.NumberOfRightAnswer = QInfo.NumberOfRightAnswer;
    FinalResult.NumberOfWrongAnswer = QInfo.NumberOfWrongAnswer;

}



stFinalResult PlayMathGame(short QuestionsNumber)
{

    /*
        Q = Question.
        OPType = Operation Type.

    */

    stFinalResult FinalResult;

    stQuestionInfo QInfo;


    QInfo.QuestionLevel = ReadQuestionsLevel();
    QInfo.OPType = ReadOperationType();



    for(int QNumber = 1; QNumber <= QuestionsNumber; QNumber++)
    {

        cout << endl << Taps(2) << "Question [" << QNumber << "/" << QuestionsNumber << "]\n" << endl; // Number Of Questions


        // Fill Two Numbers Random Numbers According To Difficulty
        QInfo.NumberOne = GetNumberAccordingToDifficulty(QInfo.QuestionLevel);
        QInfo.NumberTwo = GetNumberAccordingToDifficulty(QInfo.QuestionLevel);


        // Make Question And Take Answer From User And Solve The Quesition And Compile The Answers If The User Answer Same Like Computer Answer Return Right Answer, Otherwise Return Wrong Answer
        if(MakeQuestion(QInfo) == enAnswerIs::Right)
        {
            QInfo.NumberOfRightAnswer++;
        }
        else
        {
            QInfo.NumberOfWrongAnswer++;
        }


    }

    FillFinalResult(QInfo, FinalResult);

    return FinalResult;

}



string PassOrFail(short RightAnswers, short WrongAnswers)
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


void PrintFinalResult(stFinalResult FinalResult)
{

    cout << endl;

    cout << endl << Taps(2) << "---------------------\n";

    cout << Taps(2) << PassOrFail(FinalResult.NumberOfRightAnswer, FinalResult.NumberOfWrongAnswer) << endl;

    cout << Taps(2)  <<  "---------------------\n";

    cout << Taps(2) << "Number Of Questions     : " << FinalResult.NumberOfQuestions << endl; 
    cout << Taps(2) << "Questions Level         : " << FinalResult.QuestionLevel << endl;
    cout << Taps(2) << "OP Type                 : " << FinalResult.OPType << endl;
    cout << Taps(2) << "Number Of Write Answer  : " << FinalResult.NumberOfRightAnswer << endl;
    cout << Taps(2) << "Number Of Wrong Answer  : " << FinalResult.NumberOfWrongAnswer << endl;
    cout << Taps(2) << "---------------------\n";


}



bool PlayAgain()
{
    char Choice = 'Y';

    cout << Taps(2)<< "Do You Want Play Again Y/N ";
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