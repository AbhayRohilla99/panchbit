
#include <stdio.h>

int main(){
    float percentage;
    printf("enter the percentage=");
    scanf("%f",&percentage);
    if(percentage>=90){
            printf("Grade A");}
    else if(percentage>=80){
            printf("Grade B");}
    else if(percentage>=70){
            printf("Grade C");}
    else if(percentage>=60){
            printf("Grade D");}
    else if(percentage>=40){
            printf("Grade E");}
    else if(percentage<40){
            printf("Grade F");}
            else {
                printf("no grade");
            }
                        
}

    
    
    