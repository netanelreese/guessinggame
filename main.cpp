#include <iostream>
#include <string>
#include <cmath>
#include <windows.h>

using namespace std;

char userChoice() {
    char choice = 's';

    while (choice != 'y' || choice != 'n') {
        cout << "\nDo you wanna keep playing?(y/n)" << endl;
        cin >> choice;
        cout << choice;
        if (choice == 'y') {
            return 'y';
        }
        else if (choice == 'n') {
            return 'n';
        }
        else {
            cout << "Invalid Choice." << endl;
        }
    }
}
int main() {
    int miliseconds = 3000;


    char playChoice = 'y';

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
        playChoice = userChoice();
    }

    cout << "Thank you :)" << endl;
    Sleep(miliseconds); //shows the end card for three seconds before closing;


    return 0;
}
