#include <iostream>
using namespace std;
struct inflat {
    char name[10];
    float volumn;
    double price;
};

int main(void) {
    inflat guests[2] = {
        {"Tome", 5.4, 21.00},
        {"Lily--", 12, 34.00}
    };
    inflat xguest = {
        "Lily", 34, 23.55
    };
    cout << "The guest one:" << guests[0].name << endl;
    cout << "The guest second:" << guests[1].name << endl;
    cout << "The xguest third:" << xguest.name << xguest.volumn
        << xguest.price << endl;
}
