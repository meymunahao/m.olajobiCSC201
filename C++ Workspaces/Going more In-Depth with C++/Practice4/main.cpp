// Constants

/* 
    Frank's Carpet Cleaning Service
    Charges $30 per room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of rooms they would like cleaned
    and provide an estimate such as:
     
Estimate for carpet cleaning service:
Number of rooms: 2
Price per room: $30
Cost: $60
Tax: $3.6
====================================
Total estimate: $63.6
This estimate is valid for 30 days

Pseudocode:
    Prompt the user to enter the number of rooms
    Display number of rooms
    Display price per room
    
    Display cost:  (number of rooms * price per room)
    Display tax:   number of rooms * price per room * tax rate
    Display total estimate: (number of rooms * price per room) + (number of rooms * price per room * tax rate)
    Display estimate expiration time
*/

#include <iostream>

using namespace std;

int main(){
    
    cout << "Hello. Welcome to Muna's Carpet Cleaning Service" << endl;
    cout << "\nHow many rooms would you like cleaned?" << endl;
    
    int number_of_rooms {0};
    cin >> number_of_rooms;
    
    cout << endl;
    
    cout << "Estimate for Muna's Carpet Cleaning Service" << endl << endl;
    cout << "Number of rooms: " << number_of_rooms << endl;
    
    const double cost {30.0};
    cout << "Price per room: $ " << cost << endl;
    cout << "Cost: $ " << number_of_rooms * cost << endl;
    
    const double tax {0.06};
    cout << "Tax is: $ " << number_of_rooms * cost * tax << endl << endl;
    
    
    cout << "Total estimate is: $ " << (number_of_rooms * cost) + (number_of_rooms * cost * tax) << endl;
    
    const int estimate_expiry {30};  // days
    cout << "Estimate expiration time is: " << estimate_expiry << " days" << endl;
    
    cout << endl;
    
    return 0;
}

