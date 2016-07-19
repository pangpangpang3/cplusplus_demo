#include <iostream>
using namespace std;

class Base {
	public:
	Base() {};
	~Base() { 
		cout << "~Base" << endl;
	};
	virtual void doSomething() {
		cout << "do something in base." << endl;
	}
};

class Derived : public Base {
public:
	Derived() {};
	~Derived() {
		cout << "~Derived" << endl;
	}
	virtual void doSomething() {
		cout << "do something in derived." << endl;
	}

};

int main() {
	Derived* pDerived = new Derived;
	pDerived->doSomething();
	delete pDerived;
}
