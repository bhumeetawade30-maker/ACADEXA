
#include <iostream>
#include <string>
using namespace std;

int main() {

    string name;
    int rollNo;
    float marks[5];
    float total = 0;
    float percentage;
    string grade;
    string result = "PASS";

    cout << "====================================\n";
    cout << "     STUDENT PERFORMANCE TRACKER\n";
    cout << "====================================\n";

    cout << "\nEnter Student Name: ";
    getline(cin, name);

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cout << "\nEnter marks out of 100:\n";

    for (int i = 0; i < 5; i++) {

        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];

        if (marks[i] < 0 || marks[i] > 100) {
            cout << "Invalid marks! Enter between 0 and 100.\n";
            return 0;
        }

        total += marks[i];

        if (marks[i] < 35) {
            result = "FAIL";
        }
    }

    percentage = total / 5;

    if (result == "FAIL") {
        grade = "F";
    }
    else if (percentage >= 90) {
        grade = "A+";
    }
    else if (percentage >= 80) {
        grade = "A";
    }
    else if (percentage >= 70) {
        grade = "B";
    }
    else if (percentage >= 60) {
        grade = "C";
    }
    else {
        grade = "D";
    }

    cout << "\n====================================\n";
    cout << "          STUDENT RESULT\n";
    cout << "====================================\n";

    cout << "Student Name : " << name << endl;
    cout << "Roll Number  : " << rollNo << endl;
    cout << "Total Marks  : " << total << "/500" << endl;
    cout << "Percentage   : " << percentage << "%" << endl;
    cout << "Grade        : " << grade << endl;
    cout << "Result       : " << result << endl;

    cout << "====================================\n";
    cout << "       THANK YOU FOR USING!\n";
    cout << "====================================\n";

    return 0;
}
