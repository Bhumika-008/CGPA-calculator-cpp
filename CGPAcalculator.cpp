#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    float grade, credit;
    float totalCredits = 0, totalGradePoints = 0;

    cout << "=========================================\n";
    cout << "         STUDENT GPA CALCULATOR\n";
    cout << "=========================================\n";

    cout << "Enter Number of Courses: ";
    cin >> n;

    float grades[n], credits[n];

    // Input
    for (int i = 0; i < n; i++)
    {
        cout << "\n----------- Course " << i + 1 << " -----------\n";
        cout << "Enter Grade Point : ";
        cin >> grades[i];

        cout << "Enter Credit Hours: ";
        cin >> credits[i];

        totalCredits += credits[i];
        totalGradePoints += grades[i] * credits[i];
    }

    float GPA = totalGradePoints / totalCredits;
    float CGPA = GPA;

    // Output
    cout << "\n\n=========================================\n";
    cout << "            COURSE DETAILS\n";
    cout << "=========================================\n";

    cout << left << setw(10) << "Course"
         << setw(15) << "Grade"
         << setw(15) << "Credits" << endl;

    cout << "-----------------------------------------\n";

    for (int i = 0; i < n; i++)
    {
        cout << left << setw(10) << i + 1
             << setw(15) << grades[i]
             << setw(15) << credits[i] << endl;
    }

    cout << "=========================================\n";
    cout << fixed << setprecision(2);
    cout << "Total Credits      : " << totalCredits << endl;
    cout << "Total Grade Points : " << totalGradePoints << endl;
    cout << "Semester GPA       : " << GPA << endl;
    cout << "Overall CGPA       : " << CGPA << endl;
    cout << "=========================================\n";

    return 0;
}
