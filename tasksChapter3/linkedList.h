#pragma once

struct node {
    int num;
    node* next;
};

typedef node* link;

class linkedList {
private:
    int size;
    link head;
    link tail;
    
public:
    linkedList();
    linkedList(int);
    link getHead(){return head;};
    void pushFront(int);
    int popFront(void);
    void insertAfter(int);
    void eraseAfter(int);
};