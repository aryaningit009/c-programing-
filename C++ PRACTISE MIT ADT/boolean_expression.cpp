#include <iostream>
using namespace std;
int main() {
    int age ;
    
    int score;
    bool isAdult;
    bool isPassed;
    bool isTopper;
    cout << "Enter your age: ";
    cin >> age; 
    if (age >= 18)
    {
        cout << "You are a verifed student." << endl;
    }
    else 
    {
        cout << "You are not a student of this college. You are an adult." << endl;
    }
    cout << "Did you pass the exam? (1 for yes, 0 for no): ";
    cin >> isPassed;
    cout << "Enter your score out of 100: ";
    cin >> score;
    if (score >= 90)
    {
        cout << "You have scored excellent marks and you are a topper of the class." << endl;
    }
    else if(score <= 90 && score >= 60)
    {
        cout << "You have scored average marks and you are not a topper of the class." << endl;
    }
    else 
    {
        cout << "You have scored very low marks and you have to work hard to improve your marks." << endl;
    }
return 0;
}
    

    
    