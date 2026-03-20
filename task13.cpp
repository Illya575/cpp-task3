#include <iostream>
using namespace std;

int main() {
    string name;
    int grade, sum = 0;

    for (int i = 0; i < 3; i++) {
        cout << "Student " << i+1 << " - name: ";
        cin >> name;
        cout << "Student " << i+1 << " - grade: ";
        cin >> grade;

        sum += grade;
    }

    double avg = sum / 3.0;

    cout << "Average grade: " << avg << endl;

    return 0;
}
