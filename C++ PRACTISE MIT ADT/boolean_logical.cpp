#include <iostream>
using namespace std;
int main() {
    bool hasDegree ;
    bool hasExperience ;
    bool knowsCpp;
    cout << "Enter 1 if you have a degree, otherwise enter 0: ";
    cin >> hasDegree;
    cout << "Enter 1 if you have experience, otherwise enter 0: ";
    cin >> hasExperience; 
    cout << "Enter 1 if you know C++ , otherwise enter 0: ";
    cin >> knowsCpp;
    bool eligible = hasDegree && hasExperience && knowsCpp;
    cout << "Eligibility for the job: " << (eligible ? "Eligible" : "Not Eligible") << endl;
    bool canApply = hasDegree || hasExperience ;
    cout << "Can apply for the job: " << (canApply ? "Can Apply" : "Cannot Apply") << endl;
    bool needsTraining = !knowsCpp;
    cout << "Eligible: " << eligible << endl;
    cout << "Can Apply: " << canApply << endl;
    cout << "Needs Training: " << needsTraining << endl;
    return 0;
}