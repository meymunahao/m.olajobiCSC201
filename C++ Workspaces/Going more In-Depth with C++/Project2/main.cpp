# include <iostream>

using namespace std;

// Section 6
// Challenge

/* 
    Frank's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of small and large rooms they would like cleaned
    and provide an estimate such as:
     
Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost : $110
Tax: $6.6
===============================
Total estimate: $116.6
This estimate is valid for 30 days
*/

int main(){
    
    cout << "Hello. Welcome to Muna's Carpet Cleaning Service" << endl << endl;
    
    int number_of_small_rooms {0};
    int number_of_large_rooms {0};
    
    cout << "How many number of small rooms would you like to get cleaned ?";
    cin >> number_of_small_rooms;
    cout << endl;
    
    cout << "How many number of large rooms would you like to get cleaned?";
    cin >> number_of_large_rooms;
    cout << endl;
    
    cout << "Estimate of your purchase at Muna's Cleaning Carpet Service:" << endl << endl;
    
    cout << "Number of small rooms: " << number_of_small_rooms << endl;
    cout << "Number of large rooms: " << number_of_large_rooms << endl;
    
    const double price_per_small_room {25.0};
    const double price_per_large_room {35.0};
    cout << "Price per small room: $" << price_per_small_room << endl;
    cout << "Price per large room: $  << price_per_large_room << endl;
 
    cout << "Cost of small rooms: $" << number_of_small_rooms * price_per_small_room << endl;
    cout << "Cost of large rooms: $" << number_of_large_rooms * price_per_large_room << endl;
    cout << "Total cost: $" << (number_of_small_rooms * price_per_small_room) + (number_of_large_rooms * price_per_large_room) << endl;
    
    const double tax {0.06};
    cout << "Tax: $" << (number_of_small_rooms * price_per_small_room * tax ) + (number_of_large_rooms * price_per_large_room * tax) << endl;
    
    cout << "Total estimate: $" << ( number_of_small_rooms * price_per_small_room) + (number_of_small_rooms * price_per_small_room * tax ) + ( number_of_large_rooms * price_per_large_room) +  (number_of_large_rooms * price_per_large_room * tax) << endl;
    
    const int estimate_expiry {30};
    cout << "Estimate expiration is in " <<  estimate_expiry << " days" << endl;
    
    
    return 0;
}