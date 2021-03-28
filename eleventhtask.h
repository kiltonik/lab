#ifndef ELEVENTHTASK_H
#define ELEVENTHTASK_H


template<class T>
T custom_or(T item_1, T item_2){
    return item_1 | item_2;
}

template<class T>
T custom_xor(T item_1, T item_2){
    return item_1 ^ item_2;
}

template<class T>
T custom_and(T item_1, T item_2){
    return item_1 & item_2;
}

template<class T>
T custom_not(T item){
    return !item;
}

#endif // ELEVENTHTASK_H
