// Task 3: Calculate the volume of a cylinder

#include <iostream>
using namespace std;

int main() {
    const double pi = 3.142;
    double radius, height;
    cout << "Enter radius of the cylinder: " << endl;
    cin >> radius;
	cout << "Enter height of the cylinder: " << endl;
	cin >> height;
	
    double cylinderVolume = pi * height * radius * radius;
    cout << "Volume of the cylinder: " << cylinderVolume << " cubic units" << endl;

    return 0;
}
