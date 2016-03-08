#ifndef NEWARRAY_H
#define NEWARRAY_H
#include <iostream>
using namespace std;

template <typename T, int size>
class NewArray {
    public:
        NewArray();
        void showArray();
        bool push(T element);
        T pop();
    private:
       T* m_array;
       int m_size;
       //The actual length of Array
       int m_length;
};
#endif

template<typename T, int size>
NewArray<T, size>::NewArray() {
    m_size = size;
    m_length = 0;
    m_array = new T(m_size);
}

template<typename T, int size>
void NewArray<T, size>::showArray() {
    for (int i = 0; i < m_length; i++) {
        cout << m_array[i] << endl;
    }
}

template<typename T, int size>
bool NewArray<T, size>::push(T element) {
    if (m_length >= m_size) {
        return false;
    } else {
        m_array[m_length] = element;
        m_length++;
        return true;
    }
}

template<typename T, int size>
T NewArray<T, size>::pop() {
    return m_array[m_length - 1];
}
