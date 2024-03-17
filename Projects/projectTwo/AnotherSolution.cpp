#include <cstdlib>
#include <iostream>

using namespace std;

enum enQuestionsLevel { EazyLevel = 1, MedLevel = 2, HardLevel = 3, Mix = 4 };

<<<<<<< HEAD
enum enOperationType {Add = 1, Sub = 2, Mul = 3, Div = 4, MixOp = 5};

struct stQuestions
{
    /*
    
        // The Question Have Some Elements (Number One ) == Fill Number One With Random Number and Number Tow Also.
        // Then, The App Will Read Operation Type And Question Level From User.
        // Then, App Will Sovle The Question 
        // Then, App Will Read The User Answer. 

    
    */
    int NumberOne = 0;
    int NumberTwo = 0;
    enOperationType OperationType;
    enQuestionsLevel QuestionsLevel;
    int CorrectAnswer = 0;
    int PlayerAnswer = 0;   
    bool AnswerResult = false;
=======
enum enOperationType { Add = 1, Sub = 2, Mul = 3, Div = 4, MixOp = 5 };
>>>>>>> 5f17d11 (some of editing)

struct stQuestions {
  int NumberOne = 0;
  int NumberTwo = 0;
  enOperationType OperationType;
  enQuestionsLevel QuestionsLevel;
  int CorrectAnswer = 0;
  int PlayerAnswer = 0;
  bool AnswerResult = false;
};

struct stQuiz {
  stQuestions QuestionsList[100];
  short NumberOfQuestion = 0;
  enQuestionsLevel QuestionsLevel;
  enOperationType OpType;
  short NumberOfWrongAnswer = 0;
  short NumberOfRightAnswer = 0;
  bool IsPass = false;
};

int RandomNumber(short From, short To) {
  return rand() % (To - From + 1) + From;
}

short ReadHowManyQuestions() {
  short Questions = 0;

  do {

    cout << "How Many Question Do You Want To Answer From 1 To 10? ";
    cin >> Questions;

  } while (Questions < 1 ||
           Questions > 10); // I Can Put Qutistion From 1 To 100.

  return Questions;
}

enQuestionsLevel ReadQuestionsLevel() {
  short QLevle = 0;

  do {

    cout << "Enter Questions Level [1]Eazy , [2]Med , [3]Hard , [4]Mix:  ";
    cin >> QLevle;

  } while (QLevle < 1 || QLevle > 4);

  return (enQuestionsLevel)QLevle;
}

enOperationType ReadOpType() {
  short OpType = 0;

  do {

    cout
        << "Enter Operation Type [1] Add, [2] Sub, [3] Mul, [4] Div, [5] Mix ?";
    cin >> OpType;

  } while (OpType < 1 || OpType > 5);

  return (enOperationType)OpType;
}

enOperationType GetRandomOperationType() {
  short Op = RandomNumber(1, 4);

  return (enOperationType)Op;
}

int SimpleCalculator(int NumberOne, int NumberTwo, enOperationType OpType) {
  switch (OpType) {
  case enOperationType::Add: {
    return NumberOne + NumberTwo;
  }
  case enOperationType::Sub: {
    return NumberOne - NumberTwo;
  }
  case enOperationType::Mul: {
    return NumberOne * NumberTwo;
  }
  case enOperationType::Div: {
    return NumberOne / NumberTwo;
  }
  default: {
    return NumberOne + NumberTwo;
  }
  }
}

stQuestions GenerateQuestion(enQuestionsLevel QuestionLevel,
                             enOperationType OpType) {
  stQuestions Question;

  if (QuestionLevel == enQuestionsLevel::Mix) {
    QuestionLevel = (enQuestionsLevel)RandomNumber(1, 3);
  }

  if (OpType == enOperationType::MixOp) {
    OpType = GetRandomOperationType();
  }

  Question.OperationType = OpType;

  switch (QuestionLevel) {
  case enQuestionsLevel::EazyLevel: {
    Question.NumberOne = RandomNumber(1, 10);
    Question.NumberTwo = RandomNumber(1, 10);

    Question.CorrectAnswer = SimpleCalculator(
        Question.NumberOne, Question.NumberTwo, Question.OperationType);

    Question.QuestionsLevel = QuestionLevel;

    return Question;
  }
  case enQuestionsLevel::MedLevel: {
    Question.NumberOne = RandomNumber(10, 50);
    Question.NumberTwo = RandomNumber(10, 50);

    Question.CorrectAnswer = SimpleCalculator(
        Question.NumberOne, Question.NumberTwo, Question.OperationType);

    Question.QuestionsLevel = QuestionLevel;

    return Question;
  }
  case enQuestionsLevel::HardLevel: {
    Question.NumberOne = RandomNumber(50, 100);
    Question.NumberTwo = RandomNumber(50, 100);

    Question.CorrectAnswer = SimpleCalculator(
        Question.NumberOne, Question.NumberTwo, Question.OperationType);

    Question.QuestionsLevel = QuestionLevel;

    return Question;
  }
  }

  return Question;
}

<<<<<<< HEAD
void GenerateQuizzQuestions(stQuiz& Quizz)
{
    
    for(short Question = 0; Question < Quizz.NumberOfQuestion; Question++)
    {
        
        Quizz.QuestionsList[Question] = GenerateQuestion(Quizz.QuestionsLevel, Quizz.OpType);

    }

=======
void GenerateQuizzQuestions(stQuiz &Quizz) {

  for (short Question = 0; Question < Quizz.NumberOfQuestion; Question++) {

    Quizz.QuestionsList[Question] =
        GenerateQuestion(Quizz.QuestionsLevel, Quizz.OpType);
  }
>>>>>>> 5f17d11 (some of editing)
}

string GetOpTypeSymbol(enOperationType OT) {
  string Character[4] = {"+", "-", "x", "/"};

  return Character[OT - 1];
}

void PrintTheQuestion(stQuiz Quizz, short QuestionNumber) {

  cout << "\n";

  cout << "Question [" << QuestionNumber + 1 << "/" << Quizz.NumberOfQuestion
       << "]\n\n";
  cout << Quizz.QuestionsList[QuestionNumber].NumberOne << endl;
  cout << Quizz.QuestionsList[QuestionNumber].NumberTwo << " ";
  cout << GetOpTypeSymbol(Quizz.QuestionsList[QuestionNumber].OperationType);
  cout << "\n----------" << endl;
}

int ReadQuestionAnswer() {
  int Answer = 0;
  cin >> Answer;
  return Answer;
}

void CorrectTheQuestionAnswer(stQuiz &Quizz, short QuesitonsNumber) {

  if (Quizz.QuestionsList[QuesitonsNumber].PlayerAnswer !=
      Quizz.QuestionsList[QuesitonsNumber].CorrectAnswer) {
    Quizz.QuestionsList[QuesitonsNumber].AnswerResult = false;
    Quizz.NumberOfWrongAnswer++;

    cout << "Wrong Answer :-( \n";
    cout << "The Right Answer Is: ";
    cout << Quizz.QuestionsList[QuesitonsNumber].CorrectAnswer;
    cout << "\n";

  } else {
    Quizz.QuestionsList[QuesitonsNumber].AnswerResult = true;
    Quizz.NumberOfRightAnswer++;

    cout << "Right Answer :-) \n";
  }
  cout << endl;
}

void AskAndCorrectQuestionListAnswer(stQuiz &Quizz) {

  for (short QuesitonsNumber = 0; QuesitonsNumber < Quizz.NumberOfQuestion;
       QuesitonsNumber++) {

    PrintTheQuestion(Quizz, QuesitonsNumber);

    Quizz.QuestionsList[QuesitonsNumber].PlayerAnswer = ReadQuestionAnswer();

    CorrectTheQuestionAnswer(Quizz, QuesitonsNumber);
  }

  Quizz.IsPass = (Quizz.NumberOfRightAnswer >= Quizz.NumberOfWrongAnswer);
}

string GetFinalResultText(bool Pass) {
  if (Pass)
    return "Pass :-)";
  else
    return "Fail :-(";
}

<<<<<<< HEAD
void AskAndCoorectQuestionListAnswer(stQuiz& Quizz)
{       

    for(short QuesitonsNumber = 0; QuesitonsNumber < Quizz.NumberOfQuestion; QuesitonsNumber++)
    {

        PrintTheQuestion(Quizz, QuesitonsNumber);

        
        Quizz.QuestionsList[QuesitonsNumber].PlayerAnswer = ReadQuestionAnswer();

        CorrectTheQuestionAnswer(Quizz, QuesitonsNumber);

    }

    Quizz.IsPass = (Quizz.NumberOfRightAnswer >= Quizz.NumberOfWrongAnswer);
    
=======
string GetQuestionLevelText(enQuestionsLevel QuestionsLevel) {
  string arrQuestionsLevelText[4] = {"Eazy", "Med", "Hard", "Mix"};
>>>>>>> 5f17d11 (some of editing)

  return arrQuestionsLevelText[QuestionsLevel - 1];
}

void PrintQuizzzResults(stQuiz Quizz) {
  cout << "\n";
  cout << "------------------------------\n\n";
  cout << " Final Results Is " << GetFinalResultText(Quizz.IsPass);
  cout << "\n------------------------------\n\n";

  cout << "Number Of Questions : " << Quizz.NumberOfQuestion << endl;
  cout << "Questions Level     : " << GetQuestionLevelText(Quizz.QuestionsLevel)
       << endl;
  cout << "Op Type             : " << GetOpTypeSymbol(Quizz.OpType) << endl;
  cout << "Number Of Right Answer : " << Quizz.NumberOfRightAnswer << endl;
  cout << "Number Of Wrong Answer : " << Quizz.NumberOfWrongAnswer << endl;
  cout << "------------------------------\n";
}

void PlayMathGame() {
  stQuiz Quiz;

  Quiz.NumberOfQuestion = ReadHowManyQuestions();
  Quiz.QuestionsLevel = ReadQuestionsLevel();
  Quiz.OpType = ReadOpType();

  GenerateQuizzQuestions(Quiz);
  AskAndCorrectQuestionListAnswer(Quiz);

  PrintQuizzzResults(Quiz);
}

void StartGame() {
  char PlayAgain = 'Y';

  do {
    // RestScreen();
    PlayMathGame();

    cout << "Do You Want To Play Again Y/N : ";
    cin >> PlayAgain;
  } while (PlayAgain == 'Y' || PlayAgain == 'y');
}

int main() {

  srand((unsigned)time(NULL));

  StartGame();

  return 0;
}
