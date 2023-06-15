
#include <iostream>
using namespace std;

class Box{
private:
int l,b,h;
public:
void SetDimension(int x,int y,int z)
{l=x;b=y;h=z;}
void ShowDimension(){
    cout<<"l="<<l<<"b="<<b<<"h="<<h;}
};
    
int main(){
    Box*p,smallBox;
    p=&smallBox;
p->SetDimension(19,45,67);
p->ShowDimension();}

    
    
    
    
