#include <iostream>
using namespace std;

int main() {
	int n = 10;
loop:
	cout << n << ", ";
	n--;
	if (n > 0) goto loop; // for an unending loop, use just 'goto loop;'
	cout << "End of loop!\n";
	
	return 0;

}