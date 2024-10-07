// Anna is a contender for valedictorian of her high school. She wants to know how many students (if any) have scored higher than her in the exams given during this semester.
// Create a class named Student with the following specifications:
//  An instance variable named scores holds a student's 5 exam scores.
//  A void input () function reads 5 integers and saves them to scores.
//  An int calculateTotalScore() function that returns the sum of the student's scores.
// Input Format
// In the void Student::input() function, you must read 5 scores from standard input and save them to your scores instance variable.
// Output Format
// In the int Student::calculateTotalScore() function, you must return the student's total grade (the sum of the values in scores).
// The code in the editor will determine how many scores are larger than Anna’s and print that number to the console.
// Sample Input
// The first line contains n, the number of students in Anna’s class. The n subsequent lines contain each student's 5 exam grades for this semester.
// 3
// 30 40 45 10 10
// 40 40 40 10 10
// 50 20 30 10 10
// Sample Output
// 1

#include <iostream>
using namespace std;

class Student {
    int scores[5]; // Holds a student's 5 exam scores

public:
    // Function to read 5 exam scores
    void input() {
        for (int i = 0; i < 5; i++) {
            cin >> scores[i];
        }
    }

    // Function to calculate and return the total score
    int calculateTotalScore() {
        int sum = 0;
        for (int i = 0; i < 5; i++) {
            sum += scores[i];
        }
        return sum;
    }
};

int main() {
    int n; // Number of students
    cin >> n;

    Student Anna; // Create an instance for Anna
    Anna.input(); // Read Anna's scores

    int totalScore = Anna.calculateTotalScore(); // Calculate Anna's total score
    int count = 0; // Count of students who scored higher than Anna

    for (int i = 0; i < n; i++) {
        Student temp; // Temporary student instance
        temp.input(); // Read scores for the temporary student
        int tempScore = temp.calculateTotalScore(); // Calculate total score for the temporary student
        
        // Check if the temporary student's score is higher than Anna's
        if (tempScore > totalScore) {
            count++; // Increment count if higher
        }
    }

    // Output the number of students who scored higher than Anna
    cout << count << endl;

    return 0;
}
