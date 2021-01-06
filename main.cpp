#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int max;
    int min;
    cout << "Enter Maximum Value:" << endl; //prompting maximum value from user
    cin >> max;
    cout << "Enter Minimum Value:" << endl; //prompting min
    cin >> min;

    int randNum = rand() % max + min; // using random function to generate number between two values of max and min
    int guess = 0; //generating random number

    while (guess != randNum) { //using while loop to keep asking to enter guess if user does not get it
        cout << "Enter your guess: " << endl; //prompts user for guess
        cin >> guess; //user input to guess
        if (guess == randNum) { //if guess is correct the while loop is broken and user is congratulated
            cout << "Congrats you guessed it!" << endl; //poggers
            break;
        }
    }

    return 0;
}
