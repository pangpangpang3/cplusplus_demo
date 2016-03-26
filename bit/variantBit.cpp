#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(void) {
    char b[] = "a"    ;
    short int a = 1;
    int c = 2;
    double d = 4;

     cout << "char b length:" << sizeof(b) << endl;
     cout << "short int a length:" << sizeof(a) << endl;
     cout << "int c length:" << sizeof(c)<< endl;
     cout << "double int d length:" << sizeof(d) << endl;
     cout << "stren" << strlen(b) << endl;
}
