#include <iostream>
#include "newarray.h"
#include "coordinate.h"
using namespace std;

int main(void) {
    NewArray<Coordinate, 10> arraytest;
    Coordinate coor1(3, 5);
    Coordinate coor2(2, 8);
    arraytest.push(coor1);
    arraytest.push(coor2);

    arraytest.showArray();

    return 0;

}

