#include<iostream>
static const int N = 10000;
using namespace std;
int main(){
    int i,j,p,q,idcnt,szcnt,id[N],sz[N];
    for (i = 0; i < N; i ++){
        id[i] = i; // Array of pointers to root
        sz[i] = 1; // Array of weigts of tree
    }
    while (std::cin >> p >> q){
        idcnt = 0;
        szcnt = 0;
        //FIND
        for (i = p; i != id[i]; i = id[i]){
            idcnt+=2;
        }
        idcnt+=2;
        for (j = q; j != id[j]; j = id[j]){
            idcnt+=2;
        }
        idcnt+=2;
        if (i == j){
            cout << "Calls of id[N]: " << idcnt << endl;
            cout << "Calls id sz[N]: " << szcnt << endl; 
            continue;
        }

        //UNION
        if (sz[i] >= sz [j]){
            id[i] = j;
            sz[j] += sz[i];
        }else{
            id[j] = i;
            sz[i] += sz[j];
        }
        idcnt+=1;
        szcnt+=4;
        cout << "Calls of id[N]: " << idcnt << endl;
        cout << "Calls id sz[N]: " << szcnt << endl; 

    }
}