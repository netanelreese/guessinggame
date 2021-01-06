#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int randNum = rand();
    int guess = 0;
    while (guess != randNum) {
        cout << "Enter your guess: " << endl;
        cin >> guess;
        if (guess == randNum) {
            cout << "Congrats!" << endl;
            break;
        }
    }

    return 0;
}
