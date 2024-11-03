#include <iostream>

void computeResult(float scores[], int size, float& totalScore) {
    totalScore = 0.0;
    for(int i = 0; i < size; i++) {
        totalScore += scores[i];
    }
}

int main() {
    float scores[] = {85.5, 90.0, 78.5, 92.0};
    int size = sizeof(scores) / sizeof(scores[0]);
    float totalScore;
    
    computeResult(scores, size, totalScore);
    
    std::cout << "The total score is: " << totalScore << std::endl;
    
    return 0;
}

