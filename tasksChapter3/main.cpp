#include<iostream>
#include"linkedList.h"
using namespace std;

void foo(){
    linkedList list;
}

int main(void){
    linkedList list;
    list.pushBack(2);
    list.pushBack(42);
    list.pushBack(53);
    list.pushBack(-1);
    for (linkedList::iterator it = list.begin(); it!=list.end(); ++it ){
        cout << *it << endl; 
    }
}