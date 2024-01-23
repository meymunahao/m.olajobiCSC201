#include <iostream>
using namespace std;

int main() {
	for (int n = 10; n > 0; n--){
		if (n == 5) 
		//break;
		continue;
		
		cout << n << ", ";
	}
	cout << "\nEnd of the loop\n";
	
	return 0;

}
