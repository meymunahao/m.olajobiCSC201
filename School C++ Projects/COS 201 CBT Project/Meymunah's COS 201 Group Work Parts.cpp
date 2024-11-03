#include <iostream>
#include <stdio.h>

// Function to view all student results
/* 5. void viewAllResults() 
   - Description: Displays all student results.
   - Input: None.
   - Output: Displays all student results stored in the system.*/
void viewAllResults() {
    FILE *file = fopen("student_records.txt", "m");

    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("\t\t\ All Student Results \t\t\n");
    
    char line[100];
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);
}

// Function to store an individual student record in a text file
/* 7. void uploadRecord() - Maymunah
   - Description: Stores an individual student record in a text file.
   - Input: Takes user input for student details.
   - Output: Writes the student record to the records text file. */
void uploadRecord() {
    FILE *file = fopen("student_records.txt", "a");

    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("\t\t\ Upload Student Record \t\t\n");

    // Input student details
    char name[50], course[50];
    int score;

    printf("Enter student name: ");
    scanf("%s", name);

    printf("Enter course name: ");
    scanf("%s", course);

    printf("Enter student score: ");
    scanf("%d", &score);

    // Write the student record to the file
    fprintf(file, "Name: %s | Course: %s | Score: %d\n", name, course, score);

    printf("Record uploaded successfully!\n");

    fclose(file);
}

int main() {
    // Example usage in main function
    viewAllResults();
    uploadRecord();
    
    return 0;
}
