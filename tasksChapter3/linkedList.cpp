#include"linkedList.h"

linkedList::linkedList(){
    size = 0;
    head = nullptr;
    tail = nullptr;
}

linkedList::linkedList(int val){
    size = 1;
    head = new node;
    tail = head;
    head->next = nullptr;
    head->num = val;
}

void linkedList::pushFront(int val){
    size ++;
    link tmp = new node;
    tmp->next = nullptr;
    tmp->num = val;
    tail->next = tmp;
    tail = tmp;
}