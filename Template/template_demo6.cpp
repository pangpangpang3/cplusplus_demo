#include <iostream>
using namespace std;

template <class T>
T sum(T a, T b) {
    return (a+b);
};

int main() {
    int a = 1, b = 2;
    double c = 10.0, d = 20.0;    
    cout << sum(a, b) << endl;
    cout << sum(c, d) << endl;
    cout << sum<int>(a, b) << "XXX" <<  sum<double>(c, d) << endl;
    // cout << sum("a", "b") << endl;
    return 0;

}
