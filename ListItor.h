#ifndef LISTITOR_H
#define LISTITOR_H

#include <Itor.h>
#include <List.h>


//template<class T>
//class ListItor: public Itor<T>{
//private:
//    List<T>* list;
//public:
//    ListItor(List<T>& list);
//    T* first();
//    T* next();
//};

//template<class T>
//ListItor<T>::ListItor(List<T>& list){
//    this->list = list;
//}

//template<class T>
//T* ListItor<T>::first(){
//    List::Node<T>* firstNode = list->getCurrent();
//    while(firstNode->prev) firstNode = firstNode->prev;
//    return firstNode->item;
//}


#endif // LISTITOR_H
