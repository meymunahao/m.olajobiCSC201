//  C++ Program to Check Whether a Character is a Vowel or Consonant

#include <iostream>
using namespace std;

char v[5] = {'a', 'e', 'i', 'o', 'u'};
char c[21] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'};
	
int main ()
	{
	char value;
	cout << "Input any letter of your choice : " << endl ; 
	cin >> value ;	
	
	if ((value >= 'a' && value <='z'|| value >= 'A' && value <='Z' )){
		
		if ((value >= 'b'&& value <= 'z' && value != 'a' && value != 'e' && value != 'i' && value != 'o' && value != 'u' || 
		value >= 'B'&& value <= 'Z' && value != 'A' && value != 'E' && value != 'I' && value != 'O' && value != 'U' )){
			cout << value << " is a consonant" << endl;
	} else {
		cout << value << " is a vowel" << endl;
		
	} 
	
	} else {
		
		cout << "This is not a letter, and thus invalid." << endl;
	}
	
		return 0;
	}
	