#include <iostream>
using namespace std;

int main() {
    string name, bestName;
    int grade, bestGrade = -1;

    for (int i = 0; i < 3; i++) {
        cout << "Student " << i+1 << " - name: ";
        cin >> name;
        cout << "Student " << i+1 << " - grade: ";
        cin >> grade;

        if (grade > bestGrade) {
            bestGrade = grade;
            bestName = name;
        }
    }

    cout << "Best student: " << bestName << " (" << bestGrade << ")" << endl;

    return 0;
}
