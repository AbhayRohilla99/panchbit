
#include <iostream>
using namespace std;

int add(int num1,int num2){
    int sum=num1+num2;
    return sum;
}
int add(int num1,int num2,int num3){
    int sum=num1+num2+num3;
    return sum;
}
float add(float num1, float num2){
    float sum=num1+num2;
    return sum;
}
int main(){
    float c=4.5;
    float d=3.4;
    cout<<add(c,d)<<endl;
    return 0;
}
    
    
    
    
    