#include <cstdio>
#include <iostream>

using namespace std;

void StringFormatting() 
{

    char Name[] = "Amjad Al-Sayed Ahmed";
    char SchoolNmae[] = "Programming Advices";

    // Print String.
    printf("Dear, %s How Are You?\n\n", Name);
    printf("Welcome To %s School!\n\n", SchoolNmae);

    char C = 'S';

    printf("Setting The Width Of C:%*c \n", 1, C);
    printf("Setting The Width Of C:%*c \n", 2, C);
    printf("Setting The Width Of C:%*c \n", 3, C);
    printf("Setting The Width Of C:%*c \n", 4, C);
    printf("Setting The Width Of C:%*c \n", 5, C);


}

int main() {

  StringFormatting();

  return 0;
}
