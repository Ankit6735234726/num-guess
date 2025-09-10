#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));
    int secret = rand() % 100 + 1; // Random number between 1 and 100
    int guess = 0;

    cout << "Guess the number (between 1 and 100):\n";
    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess < secret) {
            cout << "Too low!\n";
        } else if (guess > secret) {
            cout << "Too high!\n";
        } else {
            cout << "Congratulations! You guessed the number.\n";
            break;
        }
    }
    return 0;
}