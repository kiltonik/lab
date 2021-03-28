#ifndef SEVENTHTASK_H
#define SEVENTHTASK_H
#include <iostream>
#include <stack>

template <class T>
class TwoStackQueue
{
private:

    std::stack<T> sub_stack;
    std::stack<T> main_stack;

    void replace_forward(){
        while (!main_stack.empty()){
            sub_stack.push(main_stack.top());
            main_stack.pop();
        }
    }
    void replace_back(){
        while (!sub_stack.empty()){
            main_stack.push(sub_stack.top());
            sub_stack.pop();
        }
    }

public:

    TwoStackQueue(){

    }
    void put(T item){
        replace_forward();
        sub_stack.push(item);
        replace_back();
    }

    T get(){
        T item = main_stack.top();
        main_stack.pop();
        return item;
    }
    bool is_empty(){
        return main_stack.empty();
    }
};

#endif // QUEUE_H
