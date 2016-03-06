#include <iostream>
using namespace std;

int main(void) {
    int updates = 6;
    int *p_updates;

    p_updates = &updates;
    cout << "Values: update" << updates << endl;
    cout << "*p_updates:" << *p_updates << endl;

    cout << "Address: &updates" << &updates << endl;
    cout << ", p_updates" << p_updates << endl;
    
    /*
     * int 变量updates和指针变量p_updates只不过是同一枚硬币的两面
     *
     *
     * */
    *p_updates = *p_updates + 1;
    cout << "Now updates = " << updates << endl;
    return 0;
}
