#pragma once

#include <iostream>
using namespace std;

template<class T>
class ringbuffer{                     // Template class
    int m_pos;
    int m_size;
    T *m_values;
public:
    class iterator;                 // doesn't have access to ringbuffer private variables
public:
    ringbuffer(int size):m_pos(0), m_size(size), m_values(NULL){
        m_values = new T[size];
    }
    ~ringbuffer(){
        delete [] m_values;
    }
    int size(){
        return m_pos;
    }
    int capacity(){
        return m_size;
    }
    void add_to_buffer(T value){
        m_values[m_pos++] = value;
        m_pos = m_pos % m_size;         // loops back the buffer pointer to front after capacity is exhausted
    }
    T &get_from_buffer(int pos){
        if (pos < m_size)
            return m_values[pos];
    }
    iterator begin(){
        return iterator(0, *this);
    }
    iterator end(){
        return iterator(m_size, *this);
    }
};

template<class T>
class ringbuffer<T>::iterator{        // Nested template class
    int m_pos;
    ringbuffer &m_buff;
public:
    iterator(int pos, ringbuffer &buff):m_pos(pos),m_buff(buff){}

    bool operator!=(const iterator &other) const{
        return m_pos != other.m_pos;
    }

    T &operator*(){
        return m_buff.get_from_buffer(m_pos);
    }

    iterator &operator++(int){
        // postfix operator
        m_pos++;

        return *this;
    }

    iterator &operator++(){
        // prefix operator
        ++m_pos;

        return *this;
    }
};