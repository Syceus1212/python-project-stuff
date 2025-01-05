#include <iostream>
#include <vector>
#include <cmath>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main() {
    char unit;
    int temp;

    cout << "Temperature conversion tool" << endl;
    cout << "What unit would you like to convert to? (c/f): ";
    cin >> unit;

    if(unit == 'c' || unit == 'f'){
        if(unit == 'c'){
            cout << "Enter the value in fahrenheit: " << endl;
            cin >> temp;

            cout << "Temperature in celsius is: " << (temp - 32) * 5/9 << "Celsius " << endl;
        }
        else{
            cout << "Enter the value in celsius: " << endl;
            cin >> temp;

            cout << "Temperature in fahrenheit is: " << (temp * 9/5) + 32 << " Fahrenheit " << endl;
        }
    } else {
        cout << "Please enter a correct unit of temperature.";
    }
    return 0;
}
