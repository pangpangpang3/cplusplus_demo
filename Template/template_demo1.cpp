//函数魔板
#include <iostream>
#include <stdlib.h>
using namespace std;

/*
 *    1. 求两个给定参数之和
 *    2. 求给定参数的2倍
 *    3. 求给定参数的n倍
 *
 *
 * */
// template <class T>
template <typename T>
T fun1(T a, T b) {
    return a + b;
}

template <class T>
T fun2(T a) {
    return a*2;
}

template <class T, int n>
T fun3(T a) {
    return a*n;
}

int main(void) {
    
    cout << fun1<int>(3, 5) << endl;
    cout << fun1<int>(3.3, 5.6) << endl;
    cout << fun1<float>(3.3, 5.6) << endl;
    
    cout << fun2<int>(3) << endl;
    
    cout << fun3<int, 5>(3) << endl;
    
    return 0;

}
