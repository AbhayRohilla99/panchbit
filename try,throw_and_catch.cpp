
#include <iostream>
using namespace std;

int main(){
    cout<<"welcome"<<endl;
    try{
        throw 10;
        cout<<"In Try";
        
    }
    catch(double e){
        cout<<"Exception no:"<<e<<endl;
        
    }
    catch(int e){
        cout<<"Exception no:"<<e<<endl;
    }
    catch(char e){
        cout<<"Exception no:"<<e<<endl;
    }
  cout<<"Last Line";  
}