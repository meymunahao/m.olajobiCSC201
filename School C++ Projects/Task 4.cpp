// Task 4: Calculate the Volume of a Cube
 # include <iostream>

int main() 
{
    double length;
    std::cout << "Enter length of the cube: ";
    std::cin >> length;

    double cubeVolume = length * length * length;
    std::cout << "Volume of the cube: " << cubeVolume << " cubic units" << std::endl;
    
    return 0;
}