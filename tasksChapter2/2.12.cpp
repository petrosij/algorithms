#include<iostream>
#include<math.h>

using namespace std;

float harmApprox(int a){
    return log(a) + 0.57721 + 1/(12*a);
    
}

float harmDefin(int a){
    int i;
    float result = 0.0;
    for(i = 1; i <= a; i++) result += 1/static_cast<float>(i); 
    return result;
}
int main(){
    
    float a = 0.0, b = 0.0;
    int i;
    for(i = 1; i <= 1000; i++){
        a = harmApprox(i);
        b = harmDefin(i);
        cout << "Approximate value: " << a << endl;
        cout << "Definition value: " << b << endl;
        cout << "Difference: " << b - a << endl << endl;
    }


}