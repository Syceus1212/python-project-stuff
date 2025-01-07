#include <iostream>
#include <ctime>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main() {
    
    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = rand() % 100;

    while (true)
    {
        cout << "Guess a number between 1 - 100: ";
        cin >> guess;
        
        if (tries > 10){
            cout << "You ran out of guesses! (10)" << endl;
            break;
        }

        if (guess > 100 || guess < 0) {
            cout << "Guess a number between 1 - 100: ";
            cin >> guess;
        } else if (guess > num){
            cout << "Guess is more than the number!" << endl;
            tries++;
        } else if (guess < num){
            cout << "Guess is less than the number!" << endl;
            tries ++;
        } else {
            cout << "You guessed correctly!" << endl;
            cout << "You took " << tries << " attempts!" << endl;
            break; 
        }
    }
    

    return 0;
}
