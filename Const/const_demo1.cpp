#include <iostream>
using namespace std;

int main(void) {
    const int a = 0;
    cout << "a = " << a << endl;
    
    int age = 39;
    const int* pt = &age; //a pointer to const int
    cout << "&age " << &age << endl; 
    cout << "pt:" << *pt << " " << pt << endl;
    
    int tomato = 40;
    pt = &tomato;
    cout << "tomato:" << pt << endl;

    int potato = 45;
    int* const finger = &potato; //a const pointer to int
    cout << "&potato: " << &potato << endl;
    cout << "finger:" << finger << endl;
    cout << "&finger:" << &finger << endl;

}
