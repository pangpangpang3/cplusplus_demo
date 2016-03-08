/*
#include "array.h"
#include <iostream>
using namespace std;

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
bool Array<T>::push(T ele) {
    if (m_length >= m_size) {
        return false; 
    } else {
        m_pArray(m_length) = ele;  
        m_length++;
        return true;
    }
}
*/
