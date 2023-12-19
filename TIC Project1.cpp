// Create a simple console-based "Guess the Number" game. 
// Generate a random number between 1 and 10, and prompt the user to guess the number.
// Provide feedback if the guess is too high or too low


#include <iostream>
#include <cstdlib> // For rand() and srand() functions
#include <ctime>   // For time() function
using namespace std;

int main() {
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(0)));

    // Generate a random number between 1 and 10
    int secretNumber = rand() % 10 + 1;

    int guess;
    int attempts = 0;

    cout << "Welcome to Guess the Number Game!" << endl;

    do {
        cout << "Enter your guess number (between 1 and 10): ";
        cin >> guess;

        // Increment the attempts counter
        attempts++;

        if (guess == secretNumber) {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Too high! Try again." << endl;
        }

    } while (guess != secretNumber);

    return 0;
}
