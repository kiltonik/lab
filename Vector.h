#ifndef VECTOR_H
#define VECTOR_H

#include <stddef.h>
#include <Itor.h>

//Vector methods and fields declaration
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

//Vector iterator methods and fields declaration
template<class T>
class VectorItor: public Itor<T>{
    Vector<T> &vector;
    size_t index;

public:
    VectorItor(Vector<T>& vector);
    T* first();
    T* next();
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

template<class T>
VectorItor<T>::VectorItor(Vector<T>& vector){
    this->vector = vector;
    this->index = 0;
}

template<class T>
T* VectorItor<T>::first(){
    return this->vector[0];
}

template<class T>
T* VectorItor<T>::next(){
    return this->vector(++index);
}

#endif // VECTOR_H
