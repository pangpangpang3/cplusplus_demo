//类模板
#include <iostream>
#include "array.h"
using namespace std;



int main(void) {
    Array<int> array1(5);
    array1.push(2);
    array1.push(3);

    array1.display();

    return 0;

}
