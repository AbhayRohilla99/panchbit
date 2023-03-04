
#include <stdio.h>

int main(){
    int i,n,sum=0;
    printf("enter the postive integer=");
    scanf("%d\n",&n);
    printf("printing sum of first even natural number is %d\n",n);
    for(i=1;i<=n;i++){
        printf("%d\n",2*i);
        sum=sum+2*i;
        
    }
    printf("\nsum is %d",sum);}
    
    
    
    
