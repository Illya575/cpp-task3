#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    int x;
    int y;
};

int main() {
    Point p;

    cout << "Enter x: ";
    cin >> p.x;

    cout << "Enter y: ";
    cin >> p.y;

    double d = sqrt(p.x * p.x + p.y * p.y);

    cout << "Distance from origin: " << d << endl;

    return 0;
}
