#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

int main() {
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(0)));

    // List of names
    vector<string> names = {"Tosin", "Ryan", "Onyinye", "Nathan"};

    // Generate a random index to select a name
    int randomIndex = rand() % names.size();

    // Output the randomly chosen speaker
    cout << "The chosen speaker for the presentation is: " << names[randomIndex] << endl;

    return 0;
}
