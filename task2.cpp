#include <iostream>
using namespace std;

struct Product {
    string name;
    float price;
    int quantity;
};

int main() {
    Product p;

    cout << "Enter name: ";
    cin >> p.name;

    cout << "Enter price: ";
    cin >> p.price;

    cout << "Enter quantity: ";
    cin >> p.quantity;

    float total = p.price * p.quantity;

    cout << "Total: " << total << " UAH" << endl;

    return 0;
}
