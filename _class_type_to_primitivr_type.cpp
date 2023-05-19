
#include <iostream>
using namespace std;

class complex{
private:
int a,b;
public:
void setData(int x,int y)
{a=x;b=y;}
void showData()
{cout<<"a="<<a<<"b="<<b<<endl;}
operator int(){
    return(a+b);
}
};
  int main(){
      complex C1;
      C1.setData(3,5);
      C1.showData();
      int x;
      x=C1;
      cout<<"x="<<x;
  }  
    
    
    
