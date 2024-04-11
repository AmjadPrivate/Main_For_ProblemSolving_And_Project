
/*

    == Write a program to fill a (3 by 3) matrix with random number

*/


#include <iostream>


using namespace std;

int GetRandomNumberInRange(int Form, int To)
{
    int RandomNumber = rand() % (To - Form - 1) + Form;
    
    return RandomNumber;
}

void FillMatrixWithRamdomNumbers(int Matrix[3][3])
{

    for(int i = 0; i < 3; i++)
    {

        for(int j = 0; j < 3; j++)
        {
            Matrix[i][j] = GetRandomNumberInRange(1, 100);
        }

    }

}

void PrintMatrix(int Matrix[3][3])
{
    for(int i = 0; i < 3; i++)
    {

        for(int j = 0; j < 3; j++)
        {

            printf("%0*d    ", 2, Matrix[i][j]);

        }

        cout << endl;
    }
}



int main()
{
    srand((unsigned) time (NULL));

    int Matrix[3][3];

    FillMatrixWithRamdomNumbers(Matrix);

    cout << "\n\nThe Following Is 3 by 3 Random Matrix:\n";
    PrintMatrix(Matrix); 


    return 0;
}