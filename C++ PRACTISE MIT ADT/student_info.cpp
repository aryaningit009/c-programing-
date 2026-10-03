#include <iostream>
using namespace std;
int main() {
    int rollNumber;
    string name;
    float CGPA;
    char grade;
    bool isPassed;
    cout << "Enter your roll number: ";
    cin >> rollNumber;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your CGPA: ";
    cin >> CGPA;
    cout << "Enter your grade (A-F): ";
    cin >> grade;
    cout << "Enter (1 for passed, 0 for failed): ";
    cin >> isPassed;
    
    cout << " ---------------------------------------Student Information---------------------------------------------------- " << endl;
    cout << "Name: " << name << endl;
    cout << "Roll Number: " << rollNumber << endl;
    cout << "Grade: " << grade << endl;
     if (grade >= 'A' && grade <= 'F') {
        cout << "Grade is valid." << endl;
    } else {
        cout << "Grade is invalid." << endl;
    }
    cout << "CGPA: " << CGPA << endl;
   
    cout << "Pass Status: " << isPassed << endl;
    if (isPassed)
    {
        cout << "                                     Congratulations! The student has passed.                                 " << endl;
    }
    else {
        cout << "The student has failed." << endl;
    }
    return 0;
}