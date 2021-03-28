#ifndef INDEXLIST_H
#define INDEXLIST_H
#include "list.h"


template <class T>
class IndexList: public List<T>
{
public:
    T& operator[](int index){
        auto iter = this->begin();
        while (index > 0 && iter != this->end()){
            iter++;
            index--;
        }
        if (index < 0 || iter == this->end()){
            throw new std::out_of_range("Index is out of list bounds.");
        }
        else{
            return *iter;
        }
    }
};

#endif // INDEXLIST_H
