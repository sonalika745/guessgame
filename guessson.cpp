#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;
    cout << "Welcome to the Number Guessing Game!\n"<< "Try to guess number between 1 and 100.\n";
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        if (guess < secretNumber) {
            cout << "Too low !Try again.\n";
        } else if (guess > secretNumber) {
            cout << "Too high ! Try again.\n";
        } else {
            cout << "Congratulations! You guessed the correct number in " << attempts << " attempts.\n";
            break;
        }
        attempts++;
    } while (true);
    return 0;
}