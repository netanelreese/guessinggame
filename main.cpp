#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {

    char playChoice = 'y';
    char tempChoice;

    while (playChoice != 'n') {
        int max;
        int min;
        cout << "Enter Minimum Value:" << endl; //prompting min value from user
        cin >> min;
        cout << "Enter Maximum Value:" << endl; //prompting max
        cin >> max;

        int randNum = rand() % max + min; // using random function to generate number between two values of max and min
        int guess = 0; //generating random number

        int guessLimit;
        cout << "Enter your guess limit:" << endl;
        cin >> guessLimit;
        while (guess != randNum) { //using while loop to keep asking to enter guess if user does not get it

            cout << "Guess Limit: " << guessLimit << endl; //shows user the amount of guesses left
            if (guessLimit == 0) { //if guesses equals zero the loss message is shown and while loop is broken
                cout << "\nYou Lose!! Dumbass!!!" << endl;
                cout << "The answer was: " << randNum << endl;
                break;
            }

            cout << "Enter your guess: " << endl; //prompts user for guess
            cin >> guess; //user input to guess

            if (guess == randNum) { //if guess is correct the while loop is broken and user is congratulated
                cout << "Congrats you guessed it!" << endl; //poggers
                break;
            } else if (guess < randNum) {
                cout << "The secret number is higher..." << endl;
                --guessLimit;
            } else if (guess > randNum) {
                cout << "The secret number is lower..." << endl;
                --guessLimit;
            }
        }
        cout << "\nDo you wanna keep playing?(y/n)" << endl;
        cin >> tempChoice;
        if (tempChoice == 'y') {
            playChoice = 'y';
        }
        else if (tempChoice == 'n') {
            playChoice = 'n';
        }
        else {
            cout << "Invalid input." << endl;
        }
    }

    return 0;
}
