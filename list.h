#ifndef LIST_H
#define LIST_H

#include "itor.h"
#include <iterator>


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

    T* getCurrent();struct Iterator{
        using iterator_category = std::forward_iterator_tag;
        using difference_type   = std::ptrdiff_t;
        using value_type        = Node<T>;
        using pointer           = Node<T>*;
        using reference         = Node<T>&;

        Iterator(pointer ptr) : m_ptr(ptr) {}

        reference operator*() const { return *m_ptr; }
        pointer operator->() { return m_ptr; }
        Iterator& operator++() {
            m_ptr = m_ptr->next;
            return *this;
        }
        Iterator operator++(int junk) {
            Iterator tmp = *this;
            (*this)->next;
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
    Iterator begin(){
        Node<T>* cur = currentNode;
        while(cur->prev){
            cur = cur->prev;
        }
        return Iterator(cur);
    }
    Iterator end() {
        Node<T>* cur = currentNode;
        while(cur->next){
            cur = cur->next;
        }
        return Iterator(cur);
    }
private:
    Node<T>* currentNode;
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

#endif // LIST_H
