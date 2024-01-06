#include <iostream>
#include <fstream>
#include <vector>

using namespace std;


void start() {
	cout<<"\t\tWelcome to C++ quiz game"<<endl;
	cout<<"\t\t-------------------------"<<endl;
}

void rules() {
	cout<<"\t\tRules of the game"<<endl;
	cout<<"\t\t------------------"<<endl;
	cout<<"You are expected to answer 10 questions"<<endl;
	cout<<"You can skip a question and return to it later"<<endl;
	cout<<"To answer a question enter the right option on the keyboard and Press Enter"<<endl;
	cout<<"To skip a question Press N"<<endl;
	cout<<"To go back to previous questions Press P"<<endl;
	cout<<"To submit Press F\n\n"<<endl;
}

// Structure for each question
struct Question {
    string questionText;
    vector<string> options;
    char correctOption;
};

// Function to bulk upload questions from a file
void bulkUploadQuestions(vector<Question>& questions, const string& filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error opening file: " << filename << endl;
        return;
    }

}
