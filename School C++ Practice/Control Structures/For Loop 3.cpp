// A Class activity of creating nested for loops

#include <iostream>
using namespace std;
int main() {
	int m; 
	for (m=1; m<13; m++) {
		for (m=1; m<13; m++) {
			for (m=1; m<13; m++)
				cout  << "3 * " << m << " = " << m * 2 << "\n";
		}
			
	}	
	return 0;

}