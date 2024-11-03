#include <iostream>
#include <stdio.h>
using namespace std;

// Function to display all student results
/* void viewAllResults() 
   - Description: Displays all student results.
   - Input: None.
   - Output: Displays all student results stored in the system. */
void viewAllResults() {
    FILE *file = fopen("student_records.txt", "m");

    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf(" All Student Results \n");
    
    char line[100];
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);
}

// Function to store an individual student record in a text file
/* 7. void uploadRecord() 
   - Description: Stores an individual student record in a text file.
   - Input: Takes user input for student details.
   - Output: Writes the student record to the records?text?file.*/
void uploadRecord() {
    FILE *file = fopen("student_records.txt", "a");

    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf(" Upload Student Record \n");

       // Input student details
    string name, course;
    int score;

    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter course name: ";
    cin >> course;

    cout << "Enter student score: ";
    cin >> score;

    // Write the student record to the file
    file << "Name: " << name << " | Course: " << course << " | Score: " << score << endl;

    cout << "Record uploaded successfully!" << endl;

    file.close();
}

int main() {
    
    viewAllResults();
    uploadRecord();
    
    return 0;
}
