

#include <iostream>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";}
        cout<<endl;
    }
void swapAlternate(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
            
        }
    }
}
    int main(){
        int even[8]={5,2,6,9,8,15,20,28};
        int odd[7]={5,7,8,9,10,11,15};
        swapAlternate(even,8);
        printArray(even,8);
        cout<<endl;
        swapAlternate(odd,7);
        printArray(odd,7);
        
    }
    
    
    
