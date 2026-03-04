#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numCourses;
    float grade, gradePoints;
    int credit;

    float totalGradePoints = 0.0;
    int totalCredits = 0;

    cout << "=====================================\n";
    cout << "        🎓 CGPA CALCULATOR 🎓        \n";
    cout << "=====================================\n\n";

    cout << "Enter number of courses taken: ";
    cin >> numCourses;

    cout << "\n-------------------------------------\n";
    cout << "         ENTER COURSE DETAILS        \n";
    cout << "-------------------------------------\n";

    for (int i = 1; i <= numCourses; i++) {
        cout << "\n📘 Course " << i << endl;
        cout << "   Grade (e.g., 4.0 for A): ";
        cin >> grade;
        cout << "   Credit Hours: ";
        cin >> credit;

        gradePoints = grade * credit;

        totalGradePoints += gradePoints;
        totalCredits += credit;

        cout << "   ➤ Grade Points: " << fixed << setprecision(2)
             << gradePoints << endl;
    }

    float cgpa = totalGradePoints / totalCredits;

    cout << "\n=====================================\n";
    cout << "             📊 RESULT 📊            \n";
    cout << "=====================================\n";
    cout << left << setw(25) << "Total Courses:" << numCourses << endl;
    cout << left << setw(25) << "Total Credits:" << totalCredits << endl;
    cout << left << setw(25) << "Total Grade Points:" 
         << fixed << setprecision(2) << totalGradePoints << endl;
    cout << left << setw(25) << "FINAL CGPA:" 
         << fixed << setprecision(2) << cgpa << endl;

    cout << "=====================================\n";
    cout << "   🎉 Calculation Completed! 🎉      \n";
    cout << "=====================================\n";

    return 0;
}