#include <iostream>
#include <cstdlib>


using namespace std;

enum enOperationType {};

enum enQuestionsLevel {};



struct stQuestions
{
    int NumberOne = 0;
    int NumberTwo = 0;
    enOperationType OperationType;
    enQuestionsLevel QuestionsLevel;
    int CorrectAnswer = 0;
    int PlayerAnswer = 0;
    bool AnswerResult = false;

};


struct stQuiz
{
    stQuestions QuestionsList[100];

};



void PlayMathGame()
{



}


void RestScreen()
{
    system("cls");
    system("color 0F");
}

void StartGame()
{
    char PlayAgain = 'Y';

    do
    {
        RestScreen();
        PlayMathGame();

        cout << "Do You Want To Play Again Y/N : ";
        cin >> PlayAgain;
    }
    while (PlayAgain == 'Y' || PlayAgain == 'y');



    
}






int main()
{

    srand((unsigned) time (NULL));


    return 0;
}