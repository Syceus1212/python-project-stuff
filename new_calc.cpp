// basic calculator

#include <iostream>
using namespace std;

int addnum(int x, int y) {
    int answer = x + y;
    return answer;
}

int subnum(int x, int y) {
    int answer = x - y;
    return answer;
}

int mulnum(int x, int y) {
    int answer = x * y;
    return answer;
}

int divnum(int x, int y) {
    int answer = x / y;
    return answer;
}

int x;
int y;
std::string answer;

int main() {
    cout << "Enter the first number: " << endl;
    cin >> x;

    cout  << "Enter the second number: " << endl;
    cin >> y;

    cout << "What operation would you like to use? " ;
    cin >> answer;

    if(answer == "add"){
        cout << addnum(x, y) << endl;
    } if (answer == "subtract"){
        cout << subnum(x, y) << endl;
    } if (answer == "multiply"){
        cout << mulnum(x, y) << endl;
    } if (answer == "divide"){
        cout << divnum(x, y) << endl;
    } else {
        cout << "Invalid operation!" << endl;
    }
}
