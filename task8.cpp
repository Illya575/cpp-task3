#include <iostream>
using namespace std;

int main() {
    string name1, name2;
    double price1, price2;

    cout << "Product 1 - name: ";
    cin >> name1;
    cout << "Product 1 - price: ";
    cin >> price1;

    cout << "Product 2 - name: ";
    cin >> name2;
    cout << "Product 2 - price: ";
    cin >> price2;

    if (price1 > price2)
        cout << name1 << " is more expensive" << endl;
    else if (price2 > price1)
        cout << name2 << " is more expensive" << endl;
    else
        cout << "Prices are equal" << endl;

    return 0;
}
