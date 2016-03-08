#include "calculate.h"
#include <iostream>
using namespace std;

int main(void) {
    Array<int> array1(5);
    array1.push(10);
    array1.push(11);
    array1.push(12);
    array1.push(13);

    array1.showArray();

    cout << "pop=:" << array1.pop();
}
