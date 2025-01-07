#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main() {
    int balance = 0;
    string answer;
    int dep;
    
    cout << "Welcome to bank!"<< endl;
    cout << "Would you like to deposit or withdraw money or know the balance? " << endl;
    cin >> answer;
 
    while (true){

        if (answer == "deposit") {
            cout << "Enter the amout of money you would like to deposit: ";
            cin >> dep;

            if(dep > 10000) {
                cout << "Sorry, you cannot deposit more than 10k USD at once online.";
            } else {
                balance += dep;
                cout << "Your balance is now " << balance << "$" << endl;
            }

        } else if (answer == "withdraw") {
            cout << "Enter the amount of money you would like to withdraw: ";
            cin >> dep;

            if (dep > balance) {
                cout << "You do not have enough balance to withdraw " << dep << "$" << endl;
            } else {
                balance -= dep;
                cout << "You withdrew " << dep << "$" << endl;
                cout << "Your accout balance is now " << balance << "$" << endl;
            }
        } else if (answer == "balance"){
            cout << "Your balance is currently " << balance << "USD. " << endl;
        } else {
            cout << "input invalid. " << endl;
        }

        cout << "Enter different command or press q to exit: " << endl;
        cin >> answer;

        if(answer == "q" || answer == "Q") {
            break;
        } else {
            continue;
        }
        
    }

}
