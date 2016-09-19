#include <iostream>
#include <pthread.h>

using namespace std;

#define NUM_THREADS 6 //线程数量

//函数返回的是函数指针，便于后面作为参数
void * thread_func(void* args) {
    cout << "hello thread ..." << endl;
}

int main() {
    //线程id
    pthread_t tids[NUM_THREADS];
    for( int i = 0; i < NUM_THREADS; i++) {
        int id = pthread_create(&tids[i], NULL, thread_func, NULL);
	if (id != 0) {	
	    cout << "current thread error:" << id << endl;
	} else {
	    cout << "current thread id:" << tids[i] << endl;
	}	 	
    }
    pthread_exit(NULL);
}

