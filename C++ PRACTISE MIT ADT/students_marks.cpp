#include <iostream>
using namespace std;
int main() {
    int marks;
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your marks: ";
    cin >> marks;
    if (marks >= 90) {
        cout << "Grade: A" << endl;
        
    }
    else if (marks >= 80 && marks < 90) {
        cout << "Grade : B" << endl;
    }
    else if (marks >= 70 && marks < 80) {
        cout << "Grade : C" << endl;
    }
    else if (marks >= 60 && marks < 70) {
        cout << "Grade : D" << endl;
    }
    else {
        cout << "Grade : F" << endl;
        cout << "You have failed the exam. Please try again." << endl;
    }
    cout << "---------------------------Student Details---------------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Marks: " << marks << endl;
    if (marks >= 90) {
        cout << "Congatulations! You have achieved Grade A." << endl;
    }
    else {
        cout << "Keep working hard to improve your grades, " << name << "!" << endl;
    }
    return 0;
}