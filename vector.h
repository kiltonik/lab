#ifndef VECTOR_H
#define VECTOR_H

#include <stddef.h>
#include "itor.h"
#include <stdexcept>
#include <iterator>



//Vector methods and fields declaration
template <class T>
class Vector
{
private:
    T *first_item;
    size_t items_count;
public:
    struct Iterator{
        using iterator_category = std::forward_iterator_tag;
        using difference_type   = std::ptrdiff_t;
        using value_type        = T;
        using pointer           = T*;
        using reference         = T&;

        Iterator(pointer ptr) : m_ptr(ptr) {}

        reference operator*() const { return *m_ptr; }
        pointer operator->() { return m_ptr; }
        Iterator& operator++() {
            m_ptr++;
            return *this;
        }
        Iterator operator++(int junk) {
            Iterator tmp = *this;
            ++(*this);
            return tmp;
        }
        friend bool operator== (const Iterator& a, const Iterator& b) {
            return a.m_ptr == b.m_ptr;
        };
        friend bool operator!= (const Iterator& a, const Iterator& b) {
            return a.m_ptr != b.m_ptr;
        };

    private:
        pointer m_ptr;

    };
    explicit Vector(size_t n);
    T& operator[](size_t index);
    size_t size();
    void put(T item);
    void clear();
    Iterator begin(){ return Iterator(first_item); }
    Iterator end() { return Iterator(first_item + items_count); }
    bool contains(T item);
};

template<class T>
Vector<T>::Vector(size_t n){
    this->items_count = n;
    first_item = new T[n];
}

template<class T>
T& Vector<T>::operator[](size_t index){
    if(index >= items_count)
        throw std::out_of_range("Index out of range");
    return *(first_item+index);
}

template<class T>
size_t Vector<T>::size(){
    return items_count;
}

template<class T>
void Vector<T>::clear(){
    for(
        T* it = first_item;
        it != first_item + items_count;
        ++it
        )
            it->~T();
}

template<class T>
bool Vector<T>::contains(T item){
    for(
        T* it = first_item;
        it != first_item + items_count;
        ++it
    )
        if((*it) == item)
            return true;
    return false;
}

#endif // VECTOR_H
