//*  int *p=后面必须是地址变量!
#include <iostream>
using namespace std;
int main(void) {
    int b = 1;
    int *a = &b;
    
    cout << b << endl;
    cout << a << "------" << &b << endl 
        << &a << endl
        << *a << endl
        << (int *)1 << endl;
    cout << (int *) "Home of the jolly bytes";
}
