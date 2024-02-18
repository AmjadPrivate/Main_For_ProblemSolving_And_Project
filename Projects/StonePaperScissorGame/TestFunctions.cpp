#include <charconv>
#include <iostream>
#include <cstdlib>

using namespace std;




enum enUsersInput {Stone = 1, Paper = 2, Scissors =3};

enum enHowIsWon {Player1 = 1, Computer =2, NoWinner = 3};



void ReadNumberInRange(short From, short To, short& Number, string Message)
{

    do 
    {

        cout << Message  << endl;
        cin >> Number;

    }
    while (Number < From || Number > To);


}




// Computer Input 
enUsersInput ComputerInputs()
{
    return enUsersInput(rand() % (3 - 1 + 1) + 1);
}

// Player Input 
enUsersInput PlayerOneInputs()
{
    short Answer = 0;

    ReadNumberInRange(1, 3, Answer, "Your Choice: [1]:Stone , [2]:Paper , [3]:Scissors ");

    return enUsersInput(Answer);
}



enHowIsWon HowIsWon(enUsersInput PlayerOneInput, enUsersInput ComputerInput)
{

    // The Proceses Will Be Here

    if(PlayerOneInput ==  ComputerInput)
    {
        return enHowIsWon::NoWinner;
    }
    else 
    {
         
        if(PlayerOneInput == enUsersInput::Stone && ComputerInput == enUsersInput::Paper) 
        {

            return enHowIsWon::Computer;
        
        }
        else if(PlayerOneInput == enUsersInput::Stone && ComputerInput == enUsersInput::Scissors)
        {

            return enHowIsWon::Player1;

        }
        else if(PlayerOneInput == enUsersInput::Paper && ComputerInput == enUsersInput::Stone)
        {

            return enHowIsWon::Player1;

        } 
        else if(PlayerOneInput == enUsersInput::Paper && ComputerInput == enUsersInput::Scissors) 
        {

            return enHowIsWon::Computer;
        
        }
        else if(PlayerOneInput == enUsersInput::Scissors && ComputerInput == enUsersInput::Stone) 
        {

            return enHowIsWon::Computer;
        
        }
        else if(PlayerOneInput == enUsersInput::Scissors && ComputerInput == enUsersInput::Paper) 
        {

            return enHowIsWon::Player1;
        
        }
        else 
        {
            return enHowIsWon::NoWinner;
        }


    }



    

}



int main()
{
    srand((unsigned) time (NULL));


    enUsersInput PlayerOneInput = PlayerOneInputs();
    enUsersInput ComputerInput = ComputerInputs();


    if(HowIsWon(PlayerOneInput, ComputerInput) == enHowIsWon::Computer)
    {
        cout << "\n Computer Input " << int(ComputerInput) << endl;
        cout << "\n Player Input " << int(PlayerOneInput) << endl;
        cout << "\n The Computer Won \n";
    }
    else if (HowIsWon(PlayerOneInput, ComputerInput) == enHowIsWon::Player1) 
    {        
        cout << "\n Computer Input " << int(ComputerInput) << endl;
        cout << "\n Player Input " << int(PlayerOneInput) << endl;
        cout << "\n The Player  Won \n";
    }
    else if(HowIsWon(PlayerOneInput, ComputerInput) == enHowIsWon::NoWinner)
    {
        cout << "\n Computer Input " << int(ComputerInput) << endl;
        cout << "\n Player Input " << int(PlayerOneInput) << endl;
        cout << "\n The No Winner \n";
    }
    



    return 0;
}