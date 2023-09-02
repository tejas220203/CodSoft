#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
    srand(time(0));  // Seed the random number generator with the current time
    int randnum = 1 + rand() % 100;  // Generate a random number between 1 and 100
    int guess;
    int attempts = 0;
    do 
    {
        cout << "Guess the number (between 1 & 100): ";    
        cin >> guess;
        attempts ++;

        if (guess < randnum) 
        {
            cout << "Your guessed too low! Try again." << endl;
        } 
        else if (guess > randnum) 
        {
            cout << "Your guessed too high! Try again." << endl;
        } 
        else 
        {
            cout << "Congratulations!" << endl;
            cout << "You guessed the number " << randnum << " in " << attempts << " attempts." << endl;
        }
    } while (guess != randnum);
    return 0;
}