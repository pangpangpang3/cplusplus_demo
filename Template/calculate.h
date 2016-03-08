#ifndef CALCULATE_H
#define CALCULATE_H
#include <iostream>
using namespace std;

template <typename T>
class Array {
    public:
        Array(int size);
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

template<typename T>
Array<T>::Array(int size) {
    m_size = size;
    m_length = 0;
    m_array = new T(m_size);
}

template<typename T>
void Array<T>::showArray() {
    for (int i = 0; i < m_length; i++) {
        cout << m_array[i] << endl;
    }
}

template<typename T>
bool Array<T>::push(T element) {
    if (m_length >= m_size) {
        return false;
    } else {
        m_array[m_length] = element;
        m_length++;
        return true;
    }
}

template<typename T>
T Array<T>::pop() {
    return m_array[m_length - 1];
}
