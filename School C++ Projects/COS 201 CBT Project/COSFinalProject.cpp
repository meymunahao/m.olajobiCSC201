#include <iostream>
#include <fstream>
#include <vector>
#include <limits>

using namespace std;

void start() {
    cout << "\t\tWelcome to Muna's Computer-Based Test App" << endl << endl;
}

void rules() {
    cout << "\t\t\tThe rules of the game" << endl << endl;
    
    cout << "You are required to answer 10 questions" << endl;
    cout << "To answer a question enter your option on the keyboard, then Press 'Enter'" << endl;
    cout << "You are also allowed to skip a question and go back to it later" << endl;
    cout << "To skip a question, Press S" << endl;
    cout << "To go back to previous questions, Press P" << endl;
    cout << "To submit, Press T\n" << endl;
    cout << "Let's begin! \nI wish you all the best!\n\n" << endl;
}

// Structure for each question
struct Question {
    string questionText;
    vector<string> options;
    char correctOption;
    char userAnswer;
    bool skipped;
};

// Function to bulk upload questions from a file
void bulkUploadQuestions(vector<Question>& questions, const string& filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error opening file: " << filename << endl;
        return;
    }

    Question currentQuestion;
    const int linesPerQuestion = 5;  

    while (getline(file, currentQuestion.questionText)) {
        for (int i = 0; i < linesPerQuestion - 1; ++i) {
            string option;
            getline(file, option);
            currentQuestion.options.push_back(option);
        }
        file >> currentQuestion.correctOption;
        file.ignore(numeric_limits<streamsize>::max(), '\n');
        questions.push_back(currentQuestion);
        currentQuestion.options.clear();
    }

    file.close();
}

// Function to present a single question and get user input
void presentQuestion(const Question& question) {
    cout << "Question: " << question.questionText << endl;
    for (size_t i = 0; i < question.options.size(); ++i) {
        cout << static_cast<char>('A' + i) << ". " << question.options[i] << endl;
    }
}

// Function to get user input for a question
void getUserAnswer(Question& question) {
    do {
        cout << "Your answer (A, B, C, or D): ";
        cin >> question.userAnswer;
        question.userAnswer = toupper(question.userAnswer);  // Convert to uppercase

        if (question.userAnswer == 'S') {
            question.skipped = true;
            break;  // Skip the question
        } else if (question.userAnswer == 'P') {
            break;  // Go to the previous question
        } else if (question.userAnswer == 'T') {
            break;  // Submit the test
        } else if (question.userAnswer < 'A' || question.userAnswer > 'D') {
            cout << "Invalid option. Please enter A, B, C, or D." << endl;
        } else {
            question.skipped = false;
            break;  // Break out of the loop if a valid option is entered
        }
    } while (true);  // Continue looping until a valid option is entered
}

// Function to display questions and get user input for each
void takeTest(vector<Question>& questions) {
    start();
    rules();  // Display options at the beginning
    for (size_t i = 0; i < questions.size(); ++i) {
        Question& question = questions[i];
        if (!question.skipped) {
            presentQuestion(question);
            getUserAnswer(question);

            // Handle going to the previous question
            if (question.userAnswer == 'P' && i > 0) {
                i -= 2;  // Go back to the previous question
            }

            // Handle submitting the test
            if (question.userAnswer == 'T') {
                break;  // End the test
            }
        }
    }
}

// Function to calculate and display the user's score
void displayScore(const vector<Question>& questions) {
    int correctAnswers = 0;
    for (const Question& question : questions) {
        if (!question.skipped && question.userAnswer == question.correctOption) {
            correctAnswers++;
        }
    }

    cout << "Your Score: " << correctAnswers << "/" << questions.size() << endl;
}

// Function to display the test script
void viewTestScript(const vector<Question>& questions) {
    cout << "Test Script:" << endl;
    for (const Question& question : questions) {
        cout << "Question: " << question.questionText << endl;
        cout << "Your Answer: " << (question.skipped ? "Skipped" : string(1, question.userAnswer)) << endl;
        cout << "-----------------------------" << endl;
    }
}

int main() {
    // Vector to store questions
    vector<Question> questions;

    // Bulk upload questions from a file
    bulkUploadQuestions(questions, "questions.txt");

    // Display questions and get user input
    takeTest(questions);

    // Display user's score
    displayScore(questions);

    // Offer the option to view the test script
    char viewScriptOption;
    cout << "Do you want to view your test script? (Y/N): ";
    cin >> viewScriptOption;

    if (toupper(viewScriptOption) == 'Y') {
        viewTestScript(questions);
    }

    return 0;
}
