#ifndef VECTORITOR_H
#define VECTORITOR_H

#include <Itor.h>
#include <Vector.h>


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

#endif // VECTORITOR_H
