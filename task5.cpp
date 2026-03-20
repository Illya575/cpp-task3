#include <iostream>
using namespace std;

struct Rectangle {
    float width;
    float height;
};

int main() {
    Rectangle r;

    cout << "Enter width: ";
    cin >> r.width;

    cout << "Enter height: ";
    cin >> r.height;

    float area = r.width * r.height;
    float perimeter = 2 * (r.width + r.height);

    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;

    return 0;
}
