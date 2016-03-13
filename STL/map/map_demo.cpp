#include <stdlib.h>
#include <map>
#include <iostream>
#include "coordinate.h"
using namespace std;

/* 向量vector
 * 要求：
    1. 模板参数int, 尝试使用empty, push_back, pop_back, size,
    front, back及下标访问元素。
    2. 模板参数Coordinate
    3. 使用迭代器iterator遍历vector对象中所有元素。
 *
 *
 * */
int main(void) {
    map<string, Coordinate> map1;
    
    Coordinate coor1(3, 5);
    Coordinate coor2(4, 8);

    pair<string, Coordinate> p1("shanghai", coor1);
    pair<string, Coordinate> p2("beijing", coor2);

    map1.insert(p1);
    map1.insert(p2);

    cout << map1["shanghai"] << endl;
    cout << map1["beijing"] << endl;

    map<string, Coordinate>::iterator iter = map1.begin();

    for(; iter != map1.end(); iter++) {
        cout << (*iter).first << endl;
        cout << (*iter).second << endl;
    }
    
    return 0;
}
