#include <cstdlib>
#include <iostream>

using namespace std;

enum enUsersInput { Stone = 1, Paper = 2, Scissors = 3 };

// For Final Winer
enum enHowIsWon { Player1 = 1, Computer = 2, Draw = 3 };

struct stGameResults {
  short Game_Rounds = 0;
  short Computer_Points = 0;
  short Player_Points = 0;
  short Draw_Points = 0;
  enHowIsWon FinalWiner;
};

void ReadNumberInRange(short From, short To, short &Number, string Message) {

  do {

    cout << Message << endl;
    cin >> Number;

  } while (Number < From || Number > To);
}

// Computer Input
enUsersInput ComputerInputs() { return enUsersInput(rand() % (3 - 1 + 1) + 1); }

// Player Input
enUsersInput PlayerOneInputs() {
  short Answer = 0;

  ReadNumberInRange(1, 3, Answer,
                    "Your Choice: [1]:Stone , [2]:Paper , [3]:Scissors ");

  return enUsersInput(Answer);
}

// This Function Gives Me The Winner.
enHowIsWon HowWonTheRound(enUsersInput PlayerOneInput,
                          enUsersInput ComputerInput) {

  if (PlayerOneInput == ComputerInput) {
    return enHowIsWon::Draw;
  }

  // In Case Computer Win's Only
  switch (PlayerOneInput) {
  case enUsersInput::Stone: {
    if (ComputerInput == enUsersInput::Paper) {
      return enHowIsWon::Computer;
    }
    break;
  }
  case enUsersInput::Paper: {
    if (ComputerInput == enUsersInput::Scissors) {
      return enHowIsWon::Computer;
    }
    break;
  }
  case enUsersInput::Scissors: {
    if (ComputerInput == enUsersInput::Stone) {
      return enHowIsWon::Computer;
    }
    break;
  }
  }

  // If Reach Here Than Player1 Is The Winner.
  return enHowIsWon::Player1;

  // This Is My Solution "Like A Shit :) ";

  // else
  // {

  //     if(PlayerOneInput == enUsersInput::Stone && ComputerInput ==
  //     enUsersInput::Paper)
  //     {

  //         return enHowIsWon::Computer;

  //     }
  //     else if(PlayerOneInput == enUsersInput::Stone && ComputerInput ==
  //     enUsersInput::Scissors)
  //     {

  //         return enHowIsWon::Player1;

  //     }
  //     else if(PlayerOneInput == enUsersInput::Paper && ComputerInput ==
  //     enUsersInput::Stone)
  //     {

  //         return enHowIsWon::Player1;

  //     }
  //     else if(PlayerOneInput == enUsersInput::Paper && ComputerInput ==
  //     enUsersInput::Scissors)
  //     {

  //         return enHowIsWon::Computer;

  //     }
  //     else if(PlayerOneInput == enUsersInput::Scissors && ComputerInput ==
  //     enUsersInput::Stone)
  //     {

  //         return enHowIsWon::Computer;

  //     }
  //     else if(PlayerOneInput == enUsersInput::Scissors && ComputerInput ==
  //     enUsersInput::Paper)
  //     {

  //         return enHowIsWon::Player1;

  //     }
  //     else
  //     {
  //         return enHowIsWon::Draw;
  //     }

  // }
}

string ConvertEnumToString_UsersInputs(enUsersInput UserInput) {

  switch (UserInput) {

  case enUsersInput::Paper: {
    return "Paper";
    break;
  }
  case enUsersInput::Scissors: {
    return "Scissors";
    break;
  }
  case enUsersInput::Stone: {
    return "Stone";
    break;
  }
  default: {
    return "NULL";
    break;
  }
  }
}

string ConvertEnumToString_HowIsWinner(enHowIsWon Winner) {

  switch (Winner) {
  case enHowIsWon::Computer: {
    return "[ Computer ]";
    break;
  }
  case enHowIsWon::Player1: {
    return "[ Player1 ]";
    break;
  }
  default: {
    return "[ No Winner ]";
    break;
  }
  }
}

void RoundResult(int RoundNumber, enUsersInput PlayerInput,
                 enUsersInput ComputerInput, enHowIsWon Winner) {

  cout << "\n\n--------------" << "Round [" << RoundNumber << "]"
       << "--------------\n"
       << endl;

  cout << "Player1 Choice:  " << ConvertEnumToString_UsersInputs(PlayerInput)
       << endl;
  cout << "Computer Choice: " << ConvertEnumToString_UsersInputs(ComputerInput)
       << endl;
  cout << "Round Winner:    " << ConvertEnumToString_HowIsWinner(Winner)
       << endl;

  cout << "\n-----------------------------------------\n" << endl;
}

// Get The Final Winner
enHowIsWon GetTheFinalWinner(short ComputerPoints, short PlayerPoints) {
  if (ComputerPoints == PlayerPoints) {
    return enHowIsWon::Draw;
  } else {
    if (ComputerPoints > PlayerPoints) {
      return enHowIsWon::Computer;
    } else {
      return enHowIsWon::Player1;
    }
  }
}

void RestGameResult(stGameResults &GameResults) {
  GameResults.Game_Rounds = 0;
  GameResults.Computer_Points = 0;
  GameResults.Player_Points = 0;
  GameResults.Draw_Points = 0;
  GameResults.FinalWiner = enHowIsWon::Draw;
}

// This Function Is The Final Result.
void TheFinalResult(stGameResults &GameResults) {

  cout << "\n\t\t\t------------------------------------------------\n";

  cout << "\n\t\t\t\t\t+++ Game Over +++\n";

  cout << "\n\t\t\t------------------------------------------------\n";

  cout << "\n\t\t\t--------------------" << "[ Game Result ]"
       << "--------------\n";

  cout << "\n\t\t\tGame Rounds        :  " << GameResults.Game_Rounds << endl;
  cout << "\t\t\tPlayer1 Won Times  :  " << GameResults.Player_Points << endl;
  cout << "\t\t\tComputer Won Times :  " << GameResults.Computer_Points << endl;
  ;
  cout << "\t\t\tDraw Times         :  " << GameResults.Draw_Points << endl;
  cout << "\t\t\tFinal Winner       :  "
       << ConvertEnumToString_HowIsWinner(GetTheFinalWinner(
              GameResults.Computer_Points, GameResults.Player_Points));

  cout << "\n\t\t\t--------------------------------------------------\n";

  RestGameResult(GameResults);
}

bool PlayAgain() {
  char PlayAgain;

  cout << "\n\t\t\t Do You Want Play Again Y/N ";
  cin >> PlayAgain;

  if (PlayAgain == 'y' || PlayAgain == 'Y') {
    return true;
  } else {
    return false; // Otherwise Mean No
  }
}

void StartTheGame() {
  stGameResults GameResults;

  // Users Inputs
  enUsersInput ComputerInput, PlayerOneInput;

  do {
    RestGameResult(GameResults);

    // This Function Read How Many Round Do You Want To Play
    ReadNumberInRange(1, 10, GameResults.Game_Rounds,
                      "How Many Rounds Do You Want To Play? ");

    for (int i = 1; i <= GameResults.Game_Rounds; i++) {

      cout << "\nRound [" << i << "]" << " Begins \n" << endl;

      PlayerOneInput = PlayerOneInputs();
      ComputerInput = ComputerInputs();

      enHowIsWon Winner = HowWonTheRound(PlayerOneInput, ComputerInput);

      if (Winner == enHowIsWon::Player1) {

        RoundResult(i, PlayerOneInput, ComputerInput, Winner);
        GameResults.Player_Points++;

      } else if (Winner == enHowIsWon::Computer) {
        RoundResult(i, PlayerOneInput, ComputerInput, Winner);
        GameResults.Computer_Points++;

      } else {

        RoundResult(i, PlayerOneInput, ComputerInput, Winner);
        GameResults.Draw_Points++;
      }
    }

    TheFinalResult(GameResults);

  } while (PlayAgain());
}

int main() {
  srand((unsigned)time(NULL));

  StartTheGame();

  return 0;
}
