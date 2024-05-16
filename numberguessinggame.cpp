#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Initialize random seed
    srand(static_cast<unsigned int>(time(0)));

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;
    int guess;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;
    cout << "Can you guess what it is?" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > randomNumber) {
            cout << "Your guess is too high. Try again." << endl;
        } else if (guess < randomNumber) {
            cout << "Your guess is too low. Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number." << endl;
        }
    } while (guess != randomNumber);

    return 0;
}
