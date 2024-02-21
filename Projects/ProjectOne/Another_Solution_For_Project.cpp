#include <iostream>
#include <cstdlib>

using namespace  std;


enum enGameChoice {Stone = 1, Paper = 2, Scissors =3};

enum enWinner {Player1 = 1, Computer =2, Draw = 3};


struct stGameReuslts
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
        cout << "How Many Rounds Do You Wnat To Play ? 1 To 10 \n";
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
    string arrWinnerName[3] = {"Player1", "Computer", "NoWinner"};

    return arrWinnerName[WinnerName - 1];
}

enWinner HowWonTheRound(stRoundInfo RoundInfo)
{
    if(RoundInfo.ComputerChoice == RoundInfo.Player1Choice)
    {
        return enWinner::Draw;
    }

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

string ChoiceName(enGameChoice Choice)
{
    string arrChoiceName[3] = {"Stone", "Paper", "Scissors"};

    return arrChoiceName[Choice - 1];
}


void PrintRoundResults(stRoundInfo RoundInfo)
{
    // I Stoped Here :), Good Mornoing.
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

    return (enGameChoice) Choice;
}

enGameChoice GetComputerChoce()
{
    return (enGameChoice)RandomNumber(1, 3);
}

stGameReuslts PlayGame(short HowMayRounds)
{
    stRoundInfo RoundInfo;
    short Player1WinTimes = 0, ComputerWinTimes = 0, DrawTimes = 0;

    for(int GameRound = 1; GameRound <= HowMayRounds; GameRound++)
    {
        cout << "\n Round [" << GameRound << "] Begins:\n";
        RoundInfo.RoundNumber = GameRound;
        RoundInfo.Player1Choice = ReadPlayer1Choice();
        RoundInfo.ComputerChoice = GetComputerChoce();
        RoundInfo.Winner = HowWonTheRound(RoundInfo);
        RoundInfo.WinnerName = WinnerName(RoundInfo.Winner);


        // Increase Win/Draw Counters.

        if(RoundInfo.Winner == enWinner::Player1)
            Player1WinTimes++;
        else if (RoundInfo.Winner == enWinner::Computer)
            ComputerWinTimes++;
        else
            DrawTimes++;

    }



}







void StartGame()
{
    char PlayAgian = 'Y';


    do
    {
        stGameReuslts GameResults = PlayGame(ReadHowManyRounds());


    }
    while (PlayAgian == 'Y' || PlayAgian == 'y');



}





int main()
{
    srand((unsigned) time (NULL));


    StartGame();

    restgame();
    return 0;
}

