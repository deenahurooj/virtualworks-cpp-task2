#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int secretNumber, guess;
    int attempts = 0;

    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    secretNumber = rand() % 100 + 1;

    cout << "===== NUMBER GUESSING GAME =====" << endl;
    cout << "I have selected a number between 1 and 100." << endl;
    cout << "Try to guess it!" << endl;

    do {
        cout << "\nEnter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            cout << "Too High! Try again." << endl;
        }
        else if (guess < secretNumber) {
            cout << "Too Low! Try again." << endl;
        }
        else {
            cout << "Congratulations! You guessed the correct number." << endl;
            cout << "Number of attempts: " << attempts << endl;
        }

    } while (guess != secretNumber);

    return 0;
}