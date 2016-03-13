#include <stdlib.h>
#include <vector>
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
    vector<int> vec(5, 3);
    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i] << endl;
    }
    
    vector<int> avec;
    if (avec.empty()) {
        cout << "向量为空" << endl;
    }

    avec.push_back(10);

    avec.push_back(15);

    cout << avec.front() << endl;
    cout << avec.back() << endl;

    vector<Coordinate> vecCoor;
    
    Coordinate coor1(3, 5);
    Coordinate coor2(2, 8);

    vecCoor.push_back(coor1);
    vecCoor.push_back(coor2);

    cout << vecCoor.front() << endl;
    cout << vecCoor.back() << endl;

    for (int i = 0; i < vecCoor.size(); i++) {
        cout << vecCoor[i] << endl;
    }

    vector<Coordinate>::iterator iter = vecCoor.begin();
    for(; iter != vecCoor.end(); iter++) {
        cout << "coordinate: " << *iter << endl;
    }
    return 0;
}
