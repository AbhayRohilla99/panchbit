
#include <iostream>
using namespace std;

double circum(int r){
    double cir=2*3.14*r;
    return cir; }
    double area(int r){
        double area=3.14*r*r;
        return area;
    }
    int main(){
        cout<<"enter the radius=";
        int r;
        cin>>r;
        cout<<"area:"<<area(r)<<endl;
        cout<<"circumference="<<circum(r);}
    
    
    
    
