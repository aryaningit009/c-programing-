#include <iostream>
using namespace std;
int main() {
    int age;
    float spendings;
    char grade;
    bool isPassed;
    string name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your spendings: ";
    cin >> spendings;
    cout <<  "Enter your grade (A for yes , B for no): ";
    cin >> grade;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your score: ";
    cout << "Did you pass the exam? (1 for yes, 0 for no): ";
    cin >> isPassed;

    

    if (spendings > 50000)
    {
        cout << "You have high spendings." << endl;
    }
    else 
    {
        cout << "You have low spendings." << endl;
    }
 
cout << "Your name is : " << name << endl;
cout << "Your age is : " << age << endl;
cout << "Your spendings is : " << spendings << endl;
cout << "Your grade is : " << grade << endl;
if (age >= 18)
    {
        cout << "You are 18 years old or older." << endl;
    }
    else 
    {
        cout << "You are not 18 years old or older." << endl;
    }
if (grade == 'A')
    {
        cout << "You have an excellent grade." << endl;
    }
    else 
    {
        cout << "You have a grade lower than A." << endl;
    }
if (grade == 'A' && isPassed)
cout << "                  Congratulations! You passed the exam.                             " << endl;
else 
{
cout << "Sorry, you did not pass the exam." << endl;
} 

return 0;

}