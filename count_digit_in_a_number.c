
#include <stdio.h>

int main(){
    int n,count=0,number;
    printf("enter the number=");
    scanf("%d",&n);
    while(n!=0){
        n=n/10;
        count++;
    }
    printf("\nthe number of digit is: %d",count);
    
    
    
}