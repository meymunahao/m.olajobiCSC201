// Task 1: A C++ Program without using functions to solve Simultaneous Equation

#include <iostream>

using namespace std;

int main() {
    double a, b, c, d, e, f;
    
    // Input coefficients for Equation 1 (ax + by = e)
    cout << "Enter value for a in the first simultaneous equation ax + by = e  " << endl;
    cin >> a ;
    cout << "Enter value for b in the first simultaneous equation ax + by = e " << endl;
    cin >> b ;
    cout << "Enter value for e in the first simultaneous equation ax + by = e " << endl;
    cin >> c ;
    // Input coefficients for Equation 2 (cx + dy = f)
    cout << "Enter value for d in the second simultaneous equation cx + dy = f: " << endl;
    cin >> d ;
    cout << "Enter value for e in the second simultaneous equation cx + dy = f: " <<endl;
    cin >> e ;
    cout << "Enter value for f in the second simultaneous equation cx + dy = f: "<< endl;
    cin >> f ;

    // Solve Equation 1 for x: x = (e - by) / a
    double x = (e - b * 1) / a; // Assuming y = 1 to solve for x

    // Substitute x into Equation 2: cx + dy = f
    double y = (f - d * x) / e;

    std::cout << "Solution: x = " << x << ", y = " << y << std::endl;

    return 0;
}


