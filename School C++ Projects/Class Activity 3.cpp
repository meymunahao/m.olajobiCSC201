// C++ Program to Find the Maximum and Minimum in an Array

#include <iostream>
using namespace std;
	
	int v;
	int list[0] = {};
	int maximum = list[0];
	int minimum = list[0];
	
int main(){
	cout << "Please put in the number of values in the list: ";
	cin >> v ;
	
	for (int j = 0; j < v; j++){cin >> list[j];
	
	}
	
	for (int j = 1; j < v; j++){
		if (list[j] > maximum){
			maximum = list[j];
		}
		if (list[j] < maximum){
			minimum = list[j];
		}
	}
	cout << "Thus, the maximum value is: " << maximum << endl;
	cout << "And the minimum value is: " << minimum <<  endl;
    
	else {
		cout << "Invalid Input! "
	}
    return 0;
}