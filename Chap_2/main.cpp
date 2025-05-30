/*
    Write a single-file program (named main.cpp) that reads 2 seperate integers
    from the user, adds them together, and then outputs the answer. The program should use
    3 functions:

    - A function named "readNumber" should be used to get (and return)
    a single integer from the user.

    - A function named "writeAnswer" should be used to output the answer. This function
    should take a single parameter and have no return value.

    - A main() function should be used to glue the above functions together.
*/


#include <iostream>
#include "io.h"

int main()
{
    // call readNumber, insert that into a variable, making the variable first ofc.
    int x {readNumber()};
    // call writeAnswer
    int y {readNumber()};
    writeAnswer(x + y);
    return 0;
}

// take an int input from the user and return it.













