//Task 2:  Convert temperature in Kelvin to Fahrenheit

#include <iostream>

using namespace std;

int main() {
    double kelvin;
    cout << "Enter temperature in Kelvin: " << endl;
    cin >> kelvin;

    double fahrenheit = (kelvin - 273.15) * 9 / 5 + 32;
    cout << "Temperature in Fahrenheit: " << fahrenheit << " °F" << endl;

    return 0;
}
