#ifndef ITOR_H
#define ITOR_H

template<class T>
class Itor{
    virtual T* first() = 0;
    virtual T* second() = 0;
};

#endif // ITOR_H
