#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(void) {
    map<int, string> m;
    pair<int, string> p1(10, "shanghai");
    pair<int, string> p2(20, "beijing");
    m.insert(p1);
    m.insert(p2);
    cout << m[10] << endl;
    cout << m[20] << endl;
}
