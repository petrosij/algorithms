#include <iostream>
using namespace std;

int main(){
    int i,j,k,cnt,N;
    cnt = 0;
    cout << " Enter N: ";
    cin >> N;

    for (i=0;i<N;i++){
        for(j=0;j<N;j++){
            for(k=0;k<N;k++){
                cnt++;
            }
        }
    }
    cout << "cnt: " << cnt << endl;

    int s = 0;
    i = 0;
    i = s++;
    cout << i << endl;
    cout << s << endl;
}