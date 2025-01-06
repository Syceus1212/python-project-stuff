#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main() {
    int rows;
    int columns;
    char symbol;

    cout << "How many rows?: ";
    cin >> rows;

    cout << "How many columns?: ";
    cin >> columns;

    cout << "Which symbol?: ";
    cin >> symbol;

    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= columns; j++){
            cout << symbol;
            if (columns == j){
                break;
            }
        }
        cout << endl;
    }
    return 0;
}
