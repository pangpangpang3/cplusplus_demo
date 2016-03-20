#include <stdlib.h>
#include <iostream>
#include "Binomial.h"

using namespace std;

/*
 *定义二项式（Polynomial）
    负号的运算符重载（分别通过成员函数重载和友元函数重载完成）
 *
 * */
int main(void) {
    Binomial bin(5, 3);
    Binomial bin2(10, 20);
    Binomial bin3(0, 0);
    //++bin;
    //bin2 = -bin;
    
    cout << bin.getA() << endl;
    cout << bin.getB() << endl;

    cout << "------------" << endl;
    //bin2++;bin2++;
    cout << bin2.getA() << endl;
    cout << bin2.getB() << endl;
    
    cout << "++++++++++++++" << endl;
    bin3 = bin + bin2;
    cout <<"aa"<< bin.getA() << bin2.getA() << bin3.getA() << endl;
    cout << "bb" << bin.getB() << bin2.getB() << bin3.getB() << endl;
}
