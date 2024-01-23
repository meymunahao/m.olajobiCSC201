// Task 6: Convert a given number into hours and minutes
# include <iostream>

int main() 
{
    int totalMinutes;
    std::cout << "Enter a number of minutes: ";
    std::cin >> totalMinutes;

    int hours = totalMinutes / 60;
    int minutes = totalMinutes % 60;
    std::cout << "Time: " << hours << ":" << minutes << std::endl;

    return 0;
}