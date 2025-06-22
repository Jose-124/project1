#include <iostream>
#include <string>
#include <iomanip> // For setprecision
using namespace std;

int main() {
    // Declare variables for name and quiz scores
    string name;
    double quiz1, quiz2, quiz3, quiz4;
    double lowest = 0.0;

    // Get user input
    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter all four quiz grades : ";
    cin >> quiz1 >> quiz2 >> quiz3 >> quiz4;

    // Determine the lowest score
    if (quiz1 <= quiz2 && quiz1 <= quiz3 && quiz1 <= quiz4) {
        lowest = quiz1;
        cout << "This was your lowest grade: " << quiz1 << endl;
    } else if (quiz2 <= quiz1 && quiz2 <= quiz3 && quiz2 <= quiz4) {
        lowest = quiz2;
        cout << "This was your lowest grade: " << quiz2 << endl;
    } else if (quiz3 <= quiz1 && quiz3 <= quiz2 && quiz3 <= quiz4) {
        lowest = quiz3;
        cout << "This was your lowest grade: " << quiz3 << endl;
    } else {
        lowest = quiz4;
        cout << "This was your lowest grade: " << quiz4 << endl;
    }

    // Calculate average after dropping the lowest score
    double total = quiz1 + quiz2 + quiz3 + quiz4;
    double average = (total - lowest) / 3.0;

     if (average >= 90){
        cout << "Your letter grade is an A!" << endl;
    }
    else if (average <= 89 && average >= 80){
        cout << "Your letter grade is a B. " << endl;
    }
    else if (average <= 79 && average >= 70 ){
        cout << "Your letter grade is a C." << endl;
    }
        else
            cout << "You failed." << endl;
    
    // Format and display output
    cout << fixed << setprecision(2); // Show 2 decimal places

    cout << "Student Name       : " << name << endl;
    cout << "Average (Top 3 Quizzes): " << average << endl;

    return 0;
}
