#include <iostream>
using namespace std;
int main() {
    int age ;
    bool isCitizen ;
    bool hasVoterId;
    cout << "Enter your age : " ;
    cin >> age;
    cout << "Are you a citizen? (1 for yes, 0 for no): ";
    cin >> isCitizen;
    cout << "Do you have a voter ID? (1 for yes, 0 for no ): ";
    cin >> hasVoterId;
    bool isAdult = (age >= 18);
    if (isAdult && isCitizen && hasVoterId) {
        cout << "You are eligible to vote." << endl;
    } else {
        cout << "You are not eligible to vote." << endl;
    }
    return 0;
}