#pragma once

#include <iostream>
#include <cstdlib>

using namespace std;

namespace MyLibrary
{

    int GetRandomNumberInRange(int Form, int To)
    {
        int RandomNumber = rand() % (To - Form - 1) + Form;
        
        return RandomNumber;
    }


}