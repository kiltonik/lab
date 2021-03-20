#ifndef LIST_H
#define LIST_H

#include <Itor.h>

//C++ shit
template <class T> class List;

// List node struct
template<class T>
struct Node{
private:
    Node();
public:
    T* item;
    Node* next, prev;

    template<class U>
    friend class List;
};

//List methods and fields declaration
template <class T>
class List {
public:
    List();
    void put(T*);
    T* getCurrent();
private:
    Node<T>* currentNode;
    template<typename  P>
    friend class ListItor;
};

//Iterator methods and fields declaration
template<class T>
class ListItor: public Itor<T>{
private:
    List<T>* list;
public:
    ListItor(List<T>& list);
    T* first();
    T* next();
};

template<class T>
List<T>::List(){
    currentNode = nullptr;
}

template<class T>
void List<T>::put(T* item){
    Node<T>* cur = currentNode;

    if(cur == nullptr){
        currentNode = new Node<T>;
        currentNode->item = item;
    }
    else{
        while(cur->next) cur = cur->next;

        Node<T>* newNode = new Node<T>;
        newNode->item = item;
        cur->next = newNode;
        newNode->prev = cur;
    }
}

template<class T>
T* List<T>::getCurrent(){
    return currentNode->item;
}

template<class T>
ListItor<T>::ListItor(List<T>& list){
    this->list = list;
}

template<class T>
T* ListItor<T>::first(){
    Node<T>* firstNode = list->currentNode;
    while(firstNode->prev) firstNode = firstNode->prev;
    return firstNode->item;
}



#endif // LIST_H
