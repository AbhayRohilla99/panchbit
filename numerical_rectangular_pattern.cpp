
#include <iostream>
using namespace std;

int main(){
    int i,j;
    for(i=1;i<=7;i++){
    for(j=i;j<=7;j++){
        cout<<j;
    } 
    for(j=1;j<=(i-1);j++){
        cout<<j;
    }
    cout<<endl;
    
    }
    
    
    
}