// arrays example summing up values in the array
#include <iostream>

using namespace std;

int score [] = {6,3,4,2,4};
int n, result = 0;
	

int main(){
	for (n=0; n<5; n++)
		result += score[n];
		
	cout << result;
	
	return 0;
}