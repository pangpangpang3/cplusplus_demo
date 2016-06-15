#include <iostream>
#include <functional>

using namespace std;

class View {
	public:
	void onClick(int x, int y) {
		cout << "x:" << x  << "," << "y:" << y << endl;
	}
};

function<void(View, int, int)> clickCallback;

int main(int argc, const char* argv []) {

	View button;
	clickCallback = &View::onClick;

	clickCallback(button, 10, 123);
	return 0;
}

//you need to compiler like this: g++ -std=c++11 std_bind.cpp
