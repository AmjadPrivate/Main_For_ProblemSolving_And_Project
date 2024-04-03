#include <iostream>

using namespace std;


string ReadPasswordLetters(string Message)
{

    string Password = "";

  
    cout << Message << endl;
    cin >> Password;
    
    
    return Password;
}



int GetTrailNumber(string Password)
{
    string Word = "";

    int Counter = 1;


    for(int i = 65; i <= 90; i++)
    {

        for(int j = 65; j <= 90; j++)
        {

            for(int k = 65; k <= 90; k++)
            {

                Word = Word + char(i);
                Word = Word + char(j);
                Word = Word + char(k);
                
                if(Word == Password)
                {
                    return Counter;
                }
                else 
                {
                    Counter++;
                }

                Word = "";
            }

        }

    }

    return 0;
}





int main()
{

    int Trail = GetTrailNumber( ReadPasswordLetters("Please Enter The Letters: "));

    if(Trail == 0)
        cout << "\n Not Found :--( \n" << endl;
    else 
        cout << "\n Found After " << Trail << " Trail \n" << endl;
    
    

    return 0;
}