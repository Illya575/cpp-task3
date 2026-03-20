#include <iostream>
using namespace std;

int main() {
    double w1, h1, w2, h2;

    cout << "Rectangle 1 - width: ";
    cin >> w1;
    cout << "Rectangle 1 - height: ";
    cin >> h1;

    cout << "Rectangle 2 - width: ";
    cin >> w2;
    cout << "Rectangle 2 - height: ";
    cin >> h2;

    double area1 = w1 * h1;
    double area2 = w2 * h2;

    if (area1 > area2)
        cout << "Rectangle 1 is larger (area: " << area1 << ")" << endl;
    else
        cout << "Rectangle 2 is larger (area: " << area2 << ")" << endl;

    return 0;
}
