#pragma once

struct node {
    int num;
    node* next;
};

class linkedList {
private:
    int size;
    node* head;
    node* tail;
    node* getHead(){return head;};
    
public:
    linkedList();
    explicit linkedList(int);
    ~linkedList();
    linkedList(const linkedList&) = delete;
    linkedList(linkedList&&) = default;
    linkedList& operator=(const linkedList&) = delete;
    linkedList& operator=(linkedList&&) = default;

    void pushBack(int);
    int popBack(void);
    void insertAfter(int);
    void eraseAfter(int);

    class iterator {
        node * ptr;
    public:
        explicit iterator(node*);

        int& operator*(); 
        iterator& operator++();
        bool operator!=(const iterator&);
        bool operator==(const iterator&);
    };

    iterator begin();
    iterator end();
};