#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
using namespace std;

template <typename T>
class Array {
    public:
        Array(int size);
        void display();
        bool push(T elem);
    private:
        //store the address of array;
        T* m_pArray;
        int m_size;
        int m_length;
};
#endif
template <typename T>
Array<T>::Array(int size) {
    m_size = size;
    m_length = 0;
    m_pArray = new T(m_size);
}

template <typename T>
void Array<T>::display() {
    
    for (int i = 0; i < m_length; i++) {   
        cout << m_pArray[i] << endl;
    }

}
template <typename T>
bool Array<T>::push(T elem) {
    if (m_length >= m_size) {
        return false; 
    } else {
        m_pArray[m_length] = elem;  
        m_length++;
        return true;
    }
}
