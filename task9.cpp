#include <iostream>
using namespace std;

int main() {
    double a, b, c, d;

    cout << "Complex 1 - real: ";
    cin >> a;
    cout << "Complex 1 - imag: ";
    cin >> b;

    cout << "Complex 2 - real: ";
    cin >> c;
    cout << "Complex 2 - imag: ";
    cin >> d;

    double real = a + c;
    double imag = b + d;

    cout << "Sum: " << real << " + " << imag << "i" << endl;

    return 0;
}
