#include<iostream>
#include<math.h>

using namespace std;

int main(){
    float a = 0.0, b = 0.0;
    int i = 1;
    while (i < 50){
        a = 10 * i * log(i);
        b = 2 * i * i;
        if (a<=b){
            cout << a << " <= " << b << " i = " << i << endl;
        }else{
            cout << a << " > " << b << " i = " << i << endl;
        }
        i++;
    }

}