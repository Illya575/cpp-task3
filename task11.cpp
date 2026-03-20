#include <iostream>
using namespace std;

int main() {
    string name[3];
    int grade[3];

    for (int i = 0; i < 3; i++) {
        cout << "Student " << i+1 << " - name: ";
        cin >> name[i];
        cout << "Student " << i+1 << " - grade: ";
        cin >> grade[i];
    }

    cout << "\nResults:\n";
    for (int i = 0; i < 3; i++) {
        cout << i+1 << ". " << name[i] << " - " << grade[i] << endl;
    }

    return 0;
}
