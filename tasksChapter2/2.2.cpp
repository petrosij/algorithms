#include <iostream>
#include <chrono>
using namespace std;

int main(){
    int i,j,k,N;
    long long cnt;
    cnt = 0;
   
    cout << " Enter N: ";
    cin >> N;

    auto start = chrono::high_resolution_clock::now();
    for (i=0;i<N;i++){
        for(j=0;j<N;j++){
            for(k=0;k<N;k++){
                cnt++;
            }
        }
    }

    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::nanoseconds>(end-start);
    cout << "cnt: " << cnt << endl;
    cout << "Elapsed time: " << duration.count() << endl;
}