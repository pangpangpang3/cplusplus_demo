#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    vector<int> vec;
    vec.push_back(10);
    vec.push_back(21);
    vec.push_back(13);
    vec.push_back(5);

    //vec.pop_back();
    cout << vec.size() << endl;
    
    for(int k = 0; k < vec.size(); k++) {
        cout << vec[k] << endl;
    }
    return 0;

}
