// C++ Program to Find Largest Among 3 Numbers

#include <iostream>
using namespace std;
int a;
int b;
int c;

int main() {
	int value;
	cout << "Input value 1: "; 
	cin >> a ;
	cout << "Input value 2: ";
	cin >> b;
	cout << "Input value 3: ";
	cin >> c;
	
	if (b>a && b>c)
		cout << b << " is the largest among the 3 values" << endl;
	else if (a>b && a>c)
		cout << a << " is the largest among the 3 values" << endl;
	else
		cout << c << " is the largest among the 3 values" << endl;
	
		
	return 0;

}