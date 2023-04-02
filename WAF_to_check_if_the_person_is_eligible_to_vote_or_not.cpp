
#include <iostream>
using namespace std;

 bool vote(int age){
     if(age>=18){
         return true;
     }
     else{
         return false;
     }
 }
 int main(){
     cout<<"enter your age=";
     int age;
     cin>>age;
     if(vote(age)==true){
         cout<<"yes"; }
     else {
         cout<<"no";
     }          
 
    
    
    
    
}