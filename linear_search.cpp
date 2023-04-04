
#include <iostream>
using namespace std;

int main(){
    int arr[]={2,9,18,11,7};
    int key=11;
    int ans=-1;
    for(int i=0;i<5;i++){
        if(arr[i]==key){
            ans=i;
        }
    }
    cout<<ans<<endl;
    
    
    
    
}