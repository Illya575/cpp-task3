#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x1, y1, x2, y2;

    cout << "Point 1 - Enter x: ";
    cin >> x1;
    cout << "Point 1 - Enter y: ";
    cin >> y1;

    cout << "Point 2 - Enter x: ";
    cin >> x2;
    cout << "Point 2 - Enter y: ";
    cin >> y2;

    double d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout << "Distance: " << d << endl;

    return 0;
}
