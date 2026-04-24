#include <iostream>
#include <stdexcept>
#include "linkedList.h"

linkedList::linkedList(){
    size = 0;
    head = nullptr;
    tail = nullptr;
}

linkedList::linkedList(int val){
    head = new node;
    tail = head;
    head->next = nullptr;
    head->num = val;
    size = 1;
}

linkedList::~linkedList(){
    while (head){
        node* tmp = head->next;
        delete head;
        head = tmp;        
    }
    size = 0;
}

void linkedList::pushBack(int val){
    if (head){
        node* tmp = new node;
        tmp->next = nullptr;
        tmp->num = val;
        tail->next = tmp;
        tail = tmp;
    }else{
        head = new node;
        tail = head;
        head->next = nullptr;
        head->num = val;
    }
    size ++;
}

int linkedList::popBack(){
    int var;
    
    if (!head){
        throw std::out_of_range("pop from empty container");
    }else if (head->next){
        node* tmp = head;
        while(!(tmp->next == tail)){
            tmp = tmp->next;
        }
        var = tail->num;
        delete tail;
        tail = tmp;
        tail->next = nullptr;
        size--;
        return var;
    }else{
        var = head->num;
        delete head;
        tail = nullptr;
        head = nullptr;
        size--;
        return var;
    }
}

linkedList::iterator::iterator(node* p){
    ptr = p;
}

int& linkedList::iterator::operator* (){
    return ptr->num;
}

linkedList::iterator& linkedList::iterator::operator++(){
    ptr = ptr->next;
    return *this;
}

bool linkedList::iterator::operator!=(const iterator& other){
    return (other.ptr != ptr);
}

bool linkedList::iterator::operator==(const iterator& other){
    return (other.ptr == ptr);
}

linkedList::iterator linkedList::begin(){
    return iterator(head);
}

linkedList::iterator linkedList::end(){
    return iterator(nullptr);
}