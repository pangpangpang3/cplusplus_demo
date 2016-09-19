#include <iostream>
#include <pthread.h>

using namespace std;

#define NUM_THREADS 6

class ThreadTest {
    public:
	static void* thread_func(void* args) {
	    cout << "thread hello..." << endl;
	}
};

int main() {
    pthread_t tid[NUM_THREADS];
    for (int i = 0; i < NUM_THREADS; i++) {
    	int result = pthread_create(&tid[i], NULL, ThreadTest::thread_func, NULL);
	if (result != 0) {
	    cout << "pthread_create error:" << result << endl;
	} else {
	    cout << "pthread id:" << tid[i] << endl;
	}
    }
}
