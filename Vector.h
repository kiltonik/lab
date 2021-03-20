#ifndef VECTOR_H
#define VECTOR_H

#include <stddef.h>

template <class T>
class Vector
{
private:
    T *first_item;
    size_t items_count;
public:
    explicit Vector(size_t n);

    T& operator[](size_t index);

    size_t size();
};

template<class T>
Vector<T>::Vector(size_t n){
    this->items_count = n;
    first_item = new T[n];
}

template<class T>
T& Vector<T>::operator[](size_t index){
    return first_item+index;
}

template<class T>
size_t Vector<T>::size(){
    return items_count;
}

#endif // VECTOR_H
