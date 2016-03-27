#include <iostream>
using namespace std;

int main(void) {
    int a[4][3] = {1, 2, 3, 4, 5, 6, 7, 8, 10, 11, 12};
    int(*prt)[3] = a;
    int *p = a[0];
    
    cout << "cout *prt:" << *prt[0] << endl;
    cout << "cout *p:" << *p << endl;
    cout << "A" << *(*prt + 1) << endl; 
    cout << "B" << *(p+5) << endl;
    cout << "C" << (*prt+1)+2 << endl;
    cout << "D" << *(a+1)+2 << endl;
        
}
