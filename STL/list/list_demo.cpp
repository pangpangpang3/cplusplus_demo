#include <stdlib.h>
#include <list>
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
    list<int> list1;
    list<int> list2(3, 8);

    if (list1.empty()) {
        cout << "向量为空" << endl;
    }

    list1.push_back(10);

    list1.push_back(15);

    cout << list1.front() << endl;
    cout << list1.back() << endl;

    list<int>::iterator iter = list1.begin();
    list<int>::iterator iter2 = list2.begin();
    iter2++;
    iter++;

    list1.insert(iter, iter2, list2.end());
   // list1.insert(iter, list2.begin(), list2.end()); 
   // list1.insert(iter, 22); 
    iter = list1.begin(); 
    for (; iter != list1.end(); iter++) {
        cout << "***:"  << *iter << endl;
    }

    return 0;
}
