WIKI: https://zh.wikipedia.org/wiki/%E7%BA%BF%E7%A8%8B

d）是操作系统能够进行运算调度的最小单位。它被包含在进程之中，是进程中的实际运作单位。一条线程指的是进程中一个单一顺序的控制流，一个进程中可以并发多个线程，每条线程并行执行不同的任务。在Unix System V及SunOS中也被称为轻量进程（lightweight processes），但轻量进程更多指内核线程（kernel thread），而把用户线程（user thread）称为线程。
线程是独立调度和分派的基本单位。线程可以操作系统内核调度的内核线程，如Win32线程；由用户进程自行调度的用户线程，如Linux平台的POSIX Thread；或者由内核与用户进程，如Windows 7的线程，进行混合调度。
同一进程中的多条线程将共享该进程中的全部系统资源，如虚拟地址空间，文件描述符和信号处理等等。但同一进程中的多个线程有各自的调用栈（call stack），自己的寄存器环境（register context），自己的线程本地存储（thread-local storage）。
一个进程可以有很多线程，每条线程并行执行不同的任务。
在多核或多CPU，或支持Hyper-threading的CPU上使用多线程程序设计的好处是显而易见，即提高了程序的执行吞吐率。在单CPU单核的计算机上，使用多线程技术，也可以把进程中负责IO处理、人机交互而常被阻塞的部分与密集计算的部分分开来执行，编写专门的workhorse线程执行密集计算，从而提高了程序的执行效率。
目录  [隐藏] 
1   状态
2   不同平台的线程
2.1 UNIX International线程
2.1.1   UNIX International线程简介
2.1.2   UNIX International线程的有关API
2.1.2.1 创建用户级线程
2.1.2.2 等待用户级线程
2.1.2.3 挂起用户级线程
2.1.2.4 继续用户级线程
2.1.2.5 退出用户级线程
2.1.2.6 返回当前用户级线程的线程标识符
2.2 POSIX线程
2.2.1   POSIX线程简介
2.2.2   POSIX线程的有关API
2.2.2.1 创建用户级线程
2.2.2.2 等待用户级线程
2.2.2.3 退出用户级线程
2.2.2.4 返回当前用户级线程的线程标识符
2.2.2.5 用户级线程的取消
2.3 Win32线程
2.3.1   Win32线程简介
2.3.2   Win32线程的有关API
2.3.2.1 创建用户级线程
2.3.2.2 结束本线程
2.3.2.3 挂起指定的线程
2.3.2.4 恢复指定线程运行
2.3.2.5 等待线程运行完毕
2.3.2.6 返回当前线程的线程标识符
2.3.2.7 返回当前线程的线程句柄
3   跨平台的线程
3.1 C++11线程
3.1.1   C++11线程简介
3.1.2   C++11线程的有关函数
3.1.2.1 创建线程
3.1.2.2 等待线程结束
3.1.2.3 脱离线程控制
3.1.2.4 交换线程
3.2 C11线程
3.2.1   C11线程简介
3.2.2   C11线程的有关函数
3.2.2.1 创建线程
3.2.2.2 结束本线程
3.2.2.3 等待线程运行完毕
3.2.2.4 返回当前线程的线程标识符
3.3 Java线程
4   参见
5   参考资料
状态[编辑]
线程有四种基本状态，分别为：
产生（spawn）
中断（block）
非中断（unblock）
结束（finish）
不同平台的线程[编辑]
UNIX International线程[编辑]
UNIX International线程简介[编辑]
SUN Solaris操作系统使用的线程叫做UNIX International线程，支持内核线程、轻权进程和用户线程。一个进程可有大量用户线程；大量用户线程复用少量的轻权进程，轻权进程与内核线程一一对应。用户级线程在调用核心服务时（如文件读写），需要“捆绑（bound）”在一个lwp上。永久捆绑（一个LWP固定被一个用户级线程占用，该LWP移到LWP池之外）和临时捆绑（从LWP池中临时分配一个未被占用的LWP）。在调用系统服务时，如果所有LWP已被其他用户级线程所占用（捆绑），则该线程阻塞直到有可用的LWP。如果LWP执行系统线程时阻塞（如read()调用），则当前捆绑在LWP上的用户级线程也阻塞。
UNIX International线程的有关API[编辑]
UNIX International线程的头文件是<thread.h>。[1]
创建用户级线程[编辑]
int thr_create(void * stack_base, size_t stack_size, void *(*start_routine，void *), void * arg, long flags, thread_t * new_thr);
其中flags包括：THR_BOUND（永久捆绑）, THR_NEW_LWP（创建新LWP放入LWP池），若两者同时指定则创建两个新LWP，一个永久捆绑而另一个放入LWP池。
等待用户级线程[编辑]
int thr_join(thread_t wait_for, thread_t *dead, void **status);
挂起用户级线程[编辑]
int thr_suspend(thread_t thr);
继续用户级线程[编辑]
int thr_continue(thread_t thr);
退出用户级线程[编辑]
void thr_exit(void *status);
返回当前用户级线程的线程标识符[编辑]
thread_t thr_self( void );
POSIX线程[编辑]
主条目：pthread
POSIX线程简介[编辑]
POSIX线程（POSIX threads），简称Pthreads，是线程的POSIX标准。该标准定义了创建和操纵线程的一整套API。在类Unix操作系统（Unix、Linux、Mac OS X等）中，都使用Pthreads作为操作系统的线程[2][3][4]。Windows操作系统也有其移植版pthreads-win32[5]。
POSIX线程的有关API[编辑]
Pthreads线程的头文件是<pthread.h>。[6][7]
创建用户级线程[编辑]
int pthread_create(pthread_t * thread, const pthread_attr_t * attr, void *(*start_routine)(void *), void *arg);
等待用户级线程[编辑]
int pthread_join(pthread_t thread, void ** retval);
退出用户级线程[编辑]
void pthread_exit(void *retval);
返回当前用户级线程的线程标识符[编辑]
pthread_t pthread_self(void);
用户级线程的取消[编辑]
int pthread_cancel(pthread_t thread);
Win32线程[编辑]
Win32线程简介[编辑]
Win32线程是Windows API的一部分，上下文包括：寄存器、核心栈、线程环境块和用户栈。
Win32线程的有关API[编辑]
Win32线程的头文件是<Windows.h>，仅适用于Windows操作系统。[8]
创建用户级线程[编辑]
HANDLE WINAPI CreateThread(LPSECURITY_ATTRIBUTES lpThreadAttributes, SIZE_T dwStackSize, LPTHREAD_START_ROUTINE lpStartAddress, LPVOID lpParameter, DWORD dwCreationFlags, LPDWORD lpThreadId);
结束本线程[编辑]
VOID WINAPI ExitThread(DWORD dwExitCode);
挂起指定的线程[编辑]
DWORD WINAPI SuspendThread( HANDLE hThread );
恢复指定线程运行[编辑]
DWORD WINAPI ResumeThread(HANDLE hThread);
等待线程运行完毕[编辑]
DWORD WINAPI WaitForSingleObject(HANDLE hHandle, DWORD dwMilliseconds);
返回当前线程的线程标识符[编辑]
DWORD WINAPI GetCurrentThreadId(void);
返回当前线程的线程句柄[编辑]
HANDLE WINAPI GetCurrentThread(void);
跨平台的线程[编辑]
C++11线程[编辑]
主条目：Thread (C++标准库)
C++11线程简介[编辑]
2011年8月12日，国际标准化组织（ISO）发布了第三个C++标准，即ISO/IEC 14882:2011，简称ISO C++ 11标准。该标准第一次把线程的概念引入C++标准库。Windows平台运行的VS2012和Linux平台运行的g++4.7，都完美支持C++11线程。
C++11线程的有关函数[编辑]
C++ 11线程的头文件是<thread>。[9]
创建线程[编辑]
std::thread::thread(Function&& f, Args&&... args);
等待线程结束[编辑]
std::thread::join();
脱离线程控制[编辑]
std::thread::detach();
交换线程[编辑]
std::thread::swap(thread& other);
C11线程[编辑]
C11线程简介[编辑]
2011年12月8日，国际标准化组织（ISO）发布了第三个C语言标准，即ISO 9899:2011，简称ISO C 11标准。该标准第一次把线程的概念引入C语言标准库。
C11线程仅仅是个“建议标准”，也就是说100%遵守C11标准的C编译器是可以不支持C11线程的。根据C11标准的规定，只要编译器预定义了__STDC_NO_THREADS__宏，就可以没有<threads.h>头文件，自然也就也没有下列函数。
C11线程的有关函数[编辑]
C11线程的头文件是<threads.h>。[10]
创建线程[编辑]
int thrd_create(thrd_t *thr, thrd_start_t func, void *arg);
结束本线程[编辑]
_Noreturn void thrd_exit( int res );
等待线程运行完毕[编辑]
int thrd_join(thrd_t thr, int *res);
返回当前线程的线程标识符[编辑]
thrd_t thrd_current();
Java线程[编辑]
最简单的情况是，Thread/Runnable的run()方法运行完毕，自行终止。
对于更复杂的情况，比如有循环，则可以增加终止标记变量和任务终止的检查点。
最常见的情况，也是为了解决阻塞不能执行检查点的问题，用中断来结束线程，但中断只是请求，并不能完全保证线程被终止，需要执行线程协同处理。
IO阻塞和等锁情况下需要通过特殊方式进行处理。
使用Future类的cancel()方法调用。
调用线程池执行器的shutdown()和shutdownNow()方法。
守护线程会在非守护线程都结束时自动终止。
Thread有stop()方法，但已不推荐使用。
