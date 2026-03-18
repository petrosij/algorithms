#include <iostream>
using namespace std;

static const int N = 10000;
int main(){
    int i,p,q,id[N],callsNum;
    for (i = 0; i < N; i ++) id[i] = i;
    while (std::cin >> p >> q){
        callsNum = 0;
        //FIND
        int t = id[p];
        callsNum++;
        if (t == id[q]) {
            callsNum++;
            cout << "Calls of id[N]: " << callsNum << endl;   
            continue;
        }
        callsNum++;
        //UNION
        for (i = 0; i < N; i++){
            if (id[i] == t){
                id[i] = id[q];
                callsNum += 3;
            }else{
                callsNum++;
            }
        }
        // //Array id[N]
        // std::cout << " " << p << " " << q << "; id[N]: ["; 
        // for (i = 0; i < N; i++){
        //     if (i == N-1) {
        //         std::cout << id[i] << "]"<< std::endl;
        //     }else{
        //         std::cout << id[i] << ", ";
        //     }
            
        // }
        cout << "Calls of id[N]: " << callsNum << endl; 
    }
}