#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    vector<string> vec;
    vec.push_back("hello");
    vector<string>::iterator citer = vec.begin();
    for(;citer!=vec.end();citer++) {
        cout << *citer << endl;
    }
    return 0;
}
