#include<iostream>
static const int N = 10000;
using namespace std;
int main(){
    int i,j,p,q,id[N],callsNum;
    for (i = 0; i < N; i ++) id[i] = i;
    while (std::cin >> p >> q){
        //FIND
        callsNum = 0;
        for (i = p; i != id[i]; i = id[i]){
            callsNum+=2;
        }
        callsNum+=2;
        for (j = q; j != id[j]; j = id[j])
            callsNum+=2;
        callsNum+=2;
        if (i == j){
            cout << "Calls of id[N]: " << callsNum << endl;   
            continue;
        }
        //UNION
        id[i] = j;
        callsNum++;
        cout << "Calls of id[N]: " << callsNum << endl; 
    }
}