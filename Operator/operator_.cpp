#include <stdlib.h>
#include <iostream>
#include "Binomial.h"

using namespace std;

/*
 *定义二项式（Polynomial）
    负号的运算符重载（分别通过成员函数重载和友元函数重载完成）
 *
 *
 * */
int main(void) {
    Binomial bin(5, 3);
    Binomial bin2(0, 0);

    bin2 = -bin;
    
    cout << bin.getA() << endl;
    cout << bin.getB() << endl;

}
