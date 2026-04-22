#include<iostream>
#include"linkedList.h"
using namespace std;
int main(void){
    linkedList list(42);
    list.pushFront(int(2));
    link node1 = list.getHead();
    do {
        cout << node1->num << " " << node1->next << endl;
        node1 = node1->next;
    } while (node1 != nullptr);
}