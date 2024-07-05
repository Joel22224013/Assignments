#include <iostream>
#include <random>

using namespace std;

int main() {
    int numberToGuess = rand() % 100 + 1;
    int numberOfTries = 0;

    cout << "Guess a number between 1 and 100:\n";
    while (true) {
        int guess;
        cin >> guess;
        numberOfTries++;

        if (guess < numberToGuess) {
            cout << "Too low! Try again.\n";
        } else if (guess > numberToGuess) {
            cout << "Too high! Try again.\n";
        } else {
            cout << "Congratulations! You found the number in " << numberOfTries << " tries.\n";
            break;
        }
    }
    return 0;
}

