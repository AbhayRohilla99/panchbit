
#include <iostream>
using namespace std;

struct Complex{
    private:
    int a,b;
    public:
    void set_data(int x,int y)
    {a=x,b=y;}
    void show_data(){
        cout<<"a="<<a<<"b="<<b;}
    };
    int main(){
        Complex c1;
        c1.set_data(6,7);
        c1.show_data();
    }
    
    
    
    
