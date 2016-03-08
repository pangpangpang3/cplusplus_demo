#include <iostream>
#include "newarray.h"
using namespace std;

int main(void) {
    NewArray<int, 8> numArray;
    
    numArray.push(10);
    numArray.push(20);
    numArray.push(30);
    cout << "number array:" << endl;
    numArray.showArray();
    return 0;
}
