
#include <iostream>
using namespace std;

class complex{
    private:
    int a,b;
    public:
    complex() {  }
    complex(int k)
    {a=k;b=0;}
    void setData(int x,int y)
    {a=x;b=y;}
    void showData()
    {cout<<"a="<<a<<"b="<<b;}
};
int main(){
    complex C1;
    int x=5;
    C1=x;
    C1.showData();
}
    
    
    
    
    
