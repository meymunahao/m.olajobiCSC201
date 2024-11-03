// Write a C++ program to receive two input string from the keyboard and check if the strings are palindromes or anagrams
#include <iostream>
#include <algorithm>

using namespace std;

bool isPalindrome(const string &str) {
    return str == string(str.rbegin(), str.rend());
}

bool areAnagrams(const string &str1, const string &str2) {
    string sortedStr1 = str1, sortedStr2 = str2;
    sort(sortedStr1.begin(), sortedStr1.end());
    sort(sortedStr2.begin(), sortedStr2.end());
    return sortedStr1 == sortedStr2;
}

int main() {
    string input1, input2;

    cout << "Enter the first word: "; getline(cin, input1);
    cout << "Enter the second word: "; getline(cin, input2);

    cout << (isPalindrome(input1) ? "First word is a palindrome." : "First word is not a palindrome.") << endl;
    cout << (isPalindrome(input2) ? "Second word is a palindrome." : "Second word is not a palindrome.") << endl;
    cout << (areAnagrams(input1, input2) ? "The words are anagrams." : "The words are not anagrams.") << endl;

    return 0;
}
