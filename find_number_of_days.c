
#include <stdio.h>

 
    void printNumberofDays(int N){

    if(N==1||N==3||N==5||N==7||N==8||N==10||N==12){
        printf("31 days");
    }
    else if(N==4||N==6||N==9||N==11){
        printf("30 days");
    }
    else if(N==2){
        printf("28/29");
    }
else{
    printf("invalid month");
}    
}
int main(){
    int N;
    printf("enter the value of N=");
    scanf("%d",&N);

     printNumberofDays(N);
     return 0;
}