#include <iostream>
#include <pthread.h>
using namespace std;

#define THREAD_NUM 5

void* count(void* args) {
    int t = *((int*)args);
    cout << "sub thread:" << args << endl;
}

int main() {
    pthread_t thread[THREAD_NUM];
    

    for(int i = 0; i < THREAD_NUM; i++) {
        cout << "main thread" << endl;           
        int ret = pthread_create(&thread[i], NULL, count, (void*)&i);
        if (ret != 0) {
        
            cout << "pthread create failed! error number:" << ret
                  << endl;

        }
        
        cout << "thread id" << thread[i] << endl;

    
    
    }
    for(int i = 0; i < THREAD_NUM; i++)
        pthread_join(thread[i], NULL);
    //pthread_exit(NULL);
    return 0;
}
