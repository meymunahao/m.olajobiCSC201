 // Task 5: Calculate the Volume of a Sphere
 
#include <iostream>
using namespace std;

int main() {
    const double pi = 3.142;
    double sphereRadius;
    cout << "Enter radius of the sphere: " << endl;
    cin >> sphereRadius;

    double sphereVolume = (4.0 / 3.0) * pi * sphereRadius * sphereRadius * sphereRadius;
    cout << "Volume of the sphere: " << sphereVolume << " cubic units" << endl;

    return 0;
}
