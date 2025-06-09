#include "Random.h"
#include <iostream>
#include <limits>
#include <cstdlib>

const int g_guesses = 7;

void playHiLo(int guesses, int answer);
void playAgain();
int generateNum();
int checkBounds(int guess);
void ignoreLine();
bool clearFailedExtraction();
int getGuess(int number);

int main()
{
    std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is.\n";
    // generate random number here
    int answer = Random::get(1, 100);

    // call playHiLo here
    playHiLo(g_guesses, answer);
    return 0;
}

void playHiLo(int guesses, int answer)
{
    int numGuesses {1};
    do
    {
        // ask for user input here.
        int num {getGuess(numGuesses)};
        
        num = checkBounds(num);
        // if number user input is > number, print "Your guess is too high."
        if (num > answer)
        {
            std::cout << "Your guess is too high.\n";
        }

        // else, print "Your guess is too low."
        else if (num < answer)
        {
            std::cout << "Your guess is too low.\n";
        }
        
        // if we get to the right answer, output message and break out of do while early.
        else if (num == answer)
        {
            std::cout << "Correct! You win!\n";
            break;
        }

        ++numGuesses;

    } while (numGuesses <= g_guesses);
    
    if (numGuesses > g_guesses)
    {
        std::cout << "Sorry, you lose. The correct number was " << answer << ".\n";
    }

    playAgain();
}

void playAgain()
{

    char input {};
    do
    {    
        std::cout << "Would you like to play again (y/n)?";
        std::cin >> input;
    
        // put this in a do while loop so that if the user put in neither y or n, keep asking this question.
        // if user enters y, branch back to function playHiLo.
        if (input == 'y')
        {
            playHiLo(g_guesses, Random::get(1, 100));
        }
    
        // else, return back to playHiLo, which should then return to main function.
    } while(input != 'y' && input != 'n');
    
    std::cout << "Thank you for playing.\n";

}

int checkBounds(int guess)
{
    // keep looping if user inputs a number that is not in between 1-100.
    while (guess > 100 || guess < 1)
    {

        std::cout << "The number you entered is not in the bounds of 1 - 100. Please try again: ";
        std::cin >> guess;
    }
    // return guess whether or not unchanged.
    return guess;
}
        
void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

bool clearFailedExtraction()
{
    if (!std::cin) // if prev extraction failed.
    {
        if (std::cin.eof()) // if stream was closed
        {
            std::exit(0); // Shut whole program down.
        }
        

        std::cin.clear(); // put us back in "normal" operation mode
        ignoreLine(); // ignore rest of the trailing characters, aka bad input
        return true;
    }

    return false;
}

int getGuess(int numGuesses)
{
    while (true)
    {
        int num {};
        std::cout << "Guess #" << numGuesses << ": ";
        std::cin >> num;

        if (clearFailedExtraction())
        {
            std::cout << "Input is invalid. Please try again.\n";
            continue;
        }

        ignoreLine();
        return num;
    }
}





