#include <iostream>
using namespace std;

int main() {
    int h1, m1, s1, h2, m2, s2;

    cout << "Time 1 - hours: ";
    cin >> h1;
    cout << "Time 1 - minutes: ";
    cin >> m1;
    cout << "Time 1 - seconds: ";
    cin >> s1;

    cout << "Time 2 - hours: ";
    cin >> h2;
    cout << "Time 2 - minutes: ";
    cin >> m2;
    cout << "Time 2 - seconds: ";
    cin >> s2;

    int t1 = h1 * 3600 + m1 * 60 + s1;
    int t2 = h2 * 3600 + m2 * 60 + s2;

    cout << "Difference: " << abs(t2 - t1) << " seconds" << endl;

    return 0;
}
