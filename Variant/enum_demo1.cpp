#include <iostream>
using namespace std;

int main(void) {

    enum goodWork{ FirstDay = 10, SecondDay = 1, ThirdDay = 2 } a, b, c;
    a=FirstDay;
    b=SecondDay;
    c=ThirdDay;

    cout << a << b << c;

}
