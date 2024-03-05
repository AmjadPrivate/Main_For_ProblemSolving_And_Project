#include <iostream>
#include <cstdlib>

using namespace  std;


enum enGameChoice {Stone = 1, Paper = 2, Scissors =3};

enum enWinner {Player1 = 1, Computer =2, Draw = 3};


struct stGameResults
{
    short GameRounds = 0;
    short Player1WinTimes = 0;
    short ComputerWinTimes = 0;
    short DrawTimes = 0;
    enWinner GameWinner;
    string WinnerName = "";

};

struct stRoundInfo
{
    short RoundNumber = 0;
    enGameChoice Player1Choice;
    enGameChoice ComputerChoice;
    enWinner Winner;
    string WinnerName = "";
    
};

short ReadHowManyRounds()
{
    short GameRounds = 0;

    do
    {
        cout << "How Many Rounds Do You Want To Play ? 1 To 10 \n";
        cin >> GameRounds;
    }
    while (GameRounds < 1 || GameRounds > 10);

    return GameRounds;
}

int RandomNumber(short From, short To)
{
    int RandomNumber = rand() % (To - From + 1) + From;

    return RandomNumber;
}

string WinnerName(enWinner WinnerName)
{
    string arrWinnerName[3] = {"[Player1]", "[Computer]", "[No Winner]"};

    return arrWinnerName[WinnerName - 1];
}

enWinner HowWonTheRound(stRoundInfo RoundInfo)
{
    if(RoundInfo.ComputerChoice == RoundInfo.Player1Choice)
    {
        return enWinner::Draw;
    }

    // In Case Computer Win's Only.
    switch (RoundInfo.Player1Choice)
    {
        case enGameChoice::Stone:
            if (RoundInfo.ComputerChoice == enGameChoice::Paper)
            {
                return enWinner::Computer;
            }
            break;
        case enGameChoice::Paper:
            if (RoundInfo.ComputerChoice == enGameChoice::Scissors)
            {
                return enWinner::Computer;
            }
            break;
        case enGameChoice::Scissors:
            if(RoundInfo.ComputerChoice == enGameChoice::Stone)
            {
                return enWinner::Computer;
            }
            break;

    }
    
    // If Reach Here Than Player1 Is The Winner.
    return enWinner::Player1;
}

enWinner HowWonTheGame(short Player1WinTimes, short ComputerWinTimes)
{

    if(Player1WinTimes > ComputerWinTimes)
        return enWinner::Player1;
    else if(ComputerWinTimes > Player1WinTimes)
        return enWinner::Computer;
    else
        return enWinner::Draw;

}

stGameResults FillGameResults(short GameRounds, short Player1WinTimes, short ComputerWinTimes, short DrawTimes)
{

    stGameResults GameResults;

    GameResults.GameRounds = GameRounds;
    GameResults.Player1WinTimes = Player1WinTimes;
    GameResults.ComputerWinTimes = ComputerWinTimes;    
    GameResults.DrawTimes = DrawTimes;
    GameResults.GameWinner = HowWonTheGame(Player1WinTimes,  ComputerWinTimes);
    GameResults.WinnerName = WinnerName(GameResults.GameWinner);

    return GameResults;
}

string ChoiceName(enGameChoice Choice)
{
    string arrChoiceName[3] = {"Stone", "Paper", "Scissors"};

    return arrChoiceName[Choice - 1];
}

void PrintRoundResults(stRoundInfo RoundInfo)
{
    cout << "--------------- Round[" << RoundInfo.RoundNumber<< "] ---------------\n";

    cout << "Player1 Choice   : " << ChoiceName(RoundInfo.Player1Choice) << endl;
    cout << "Computer Choice  : " << ChoiceName(RoundInfo.ComputerChoice) << endl;
    cout << "Round Winner     : " << RoundInfo.WinnerName << endl;

    cout << "-------------------------------------------\n"; 
    
}

enGameChoice ReadPlayer1Choice()
{

    short Choice = 0;

    do
    {
        cout << "\nYour Choice: [1]:Stone, [2]:Paper, [3]:Scissors ?";
        cin >> Choice;
    }
    while (Choice < 1 || Choice > 3);

    return (enGameChoice) Choice; // Casting
}

enGameChoice GetComputerChoice()
{
    return (enGameChoice)RandomNumber(1, 3);
}

stGameResults PlayGame(short HowMayRounds)
{
    stRoundInfo RoundInfo;
    short Player1WinTimes = 0, ComputerWinTimes = 0, DrawTimes = 0;

    for(int GameRound = 1; GameRound <= HowMayRounds; GameRound++)
    {

        cout << "\n Round [" << GameRound << "] Begins:\n";
        RoundInfo.RoundNumber = GameRound;
        RoundInfo.Player1Choice = ReadPlayer1Choice();
        RoundInfo.ComputerChoice = GetComputerChoice();
        RoundInfo.Winner = HowWonTheRound(RoundInfo);
        RoundInfo.WinnerName = WinnerName(RoundInfo.Winner);


        // Increase Win/Draw Counters.

        if(RoundInfo.Winner == enWinner::Player1)
        {

            Player1WinTimes++;

        }
        else if (RoundInfo.Winner == enWinner::Computer)
        {
            
            ComputerWinTimes++;

        }
        else
        {
            
            DrawTimes++;

        }


        PrintRoundResults(RoundInfo);
    }


    return FillGameResults(HowMayRounds,  Player1WinTimes,  ComputerWinTimes,  DrawTimes);

}

string Taps(short NumberOfTaps)
{
    string t ="";

    for(int i = 1; i <= NumberOfTaps; i++)
    {
        t = t + "\t";
        cout << t;
    }
    
    return t;
}

void ShowGameOverScreen()
{
    cout << Taps(2) << "--------------------------------------------\n\n";
    
    cout << Taps(2) << "                   ++ Game Over ++\n";
    
    cout << Taps(2) << "--------------------------------------------\n\n";

}

void ShowFinalGameResult(stGameResults GameResults)
{

    cout << Taps(2) << "--------------------- [Game Results] ---------------------\n\n";
    cout << Taps(2) << "Game Rounds         :" << GameResults.GameRounds << endl;
    cout << Taps(2) << "Player Won Times    :" << GameResults.Player1WinTimes << endl;
    cout << Taps(2) << "Computer Won Times  :" << GameResults.ComputerWinTimes << endl;
    cout << Taps(2) << "Draw Times          :" << GameResults.DrawTimes << endl;
    cout << Taps(2) << "Final Winner        :" << GameResults.WinnerName << endl;

    cout << Taps(2) << "-------------------------------------------------------------\n\n";

}

void StartGame()
{
    char PlayAgian = 'Y';


    do
    {
        stGameResults GameResults = PlayGame(ReadHowManyRounds());
        ShowGameOverScreen();
        ShowFinalGameResult(GameResults);

        cout << Taps(3) << "Do You Wnat Play Agian Y/N ";
        cin >> PlayAgian;

    }
    while (PlayAgian == 'Y' || PlayAgian == 'y');



}

int main()
{
    srand((unsigned) time (NULL));


    StartGame();

    
    return 0;
}

