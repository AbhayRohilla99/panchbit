
#include <iostream>
using namespace std;

int main(){
    int english,maths,chemistry,physics,hindi,sum;
    float per;
    cout<<"enter marks of hindi:"<<endl;
    cin>>hindi;
    cout<<"enter marks of english:"<<endl;
    cin>>english;
    cout<<"enter marks of chemistry:"<<endl;
    cin>>chemistry;
    cout<<"enter marks of physics:"<<endl;
    cin>>physics;
    cout<<"enter marks of maths:"<<endl;
    cin>>maths;
    sum=english+maths+physics+chemistry+hindi;
    cout<<"sum of marks="<<sum<<endl;
    per=sum/5;
    cout<<"percentege of marks="<<per;
    
    
    
}