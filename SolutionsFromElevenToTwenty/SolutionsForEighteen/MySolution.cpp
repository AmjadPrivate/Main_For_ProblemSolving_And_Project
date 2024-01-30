#include <iostream>
#include <string>

using namespace std;

string ReadText(string Massege)
{
    string Text = "";

    cout << Massege << endl;
    getline(cin, Text);

    return Text;
}


string EncryptText(string Text, short EncryptionKey)
{
    
    for(int i = 0; i <= Text.length(); i++) 
    {

        Text[i] = char( (int) Text[i] + EncryptionKey ); 

    }

    return Text;
}


string DecryptText(string Text, short EncryptionKey)
{

    for(int i = 0; i <= Text.length(); i++)
    {

        Text[i] = char( (int) Text[i] - EncryptionKey);

    }

    return Text;
}


int main()
{
    const short int EncryptionKey = 9;

    string Text = ReadText("Please Enter A Text? ");
    string TextAfterEncryption = EncryptText(Text, EncryptionKey);
    string TextAfterDectryption = DecryptText(TextAfterEncryption, EncryptionKey);


    cout << "\n The Main Text Is: \n " << Text << "\n" << endl;
    cout << "The Text After Encryption Is: \n " << TextAfterEncryption << "\n" << endl;
    cout << "The Text After Decryption Is: \n " << TextAfterDectryption << "\n" << endl;



    return 0;
}