// Operations that can be performd on strings
#include <iostream>
#include <string>
#include <string.h>

using namespace std;
// My personal example...that doesn't seem to work out

//int main(){
//	string uni = "PAU";
//	string muna = "Meymunah";
//	cout << uni << endl;
//	cout << muna << endl;
//	
////	str.compare[str2]; // compare two string objects
////	str.length[]; // find the length of the string
////	str.swap[]; // swap the values of two string objects
////	str.substr[position, number]; // creates a new string object of n characters
//	str.size(muna); // returns the length of the string in terms of bytes
//	str.size(uni);
//	
//	return 0;
//}


int main(){
	string str = "Pan Atlantic University";
	string str2 = "Pan-Atlantic University";
	cout << "str.compare(str2): " << str.compare(str2) << endl;
	cout << "str.length(): " << str.length() << endl;
	cout << "str.size(): " << str.size() << endl;
	
	str.swap(str2);
	cout << "str.swap(str2):" << str << endl;
	
	int position = 0;
	int number = 5;
	
	cout << "str.substr(position, number): " << str.substr(position, number) << endl;
	
	return 0;
}