
#include <iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<int>V;
    cout<<"Size: "<<V.size()<<endl;
    cout<<"Capacity: "<<V.capacity()<<endl;
    V.push_back(1);
    cout<<"Size: "<<V.size()<<endl;
    cout<<"Capacity: "<<V.capacity()<<endl;
    V.push_back(2);
    cout<<"Size: "<<V.size()<<endl;
    cout<<"Capacity: "<<V.capacity()<<endl;
    V.push_back(3);
    cout<<"Size: "<<V.size()<<endl;
    cout<<"Capacity: "<<V.capacity()<<endl;
    V.resize(5);
    cout<<"Size: "<<V.size()<<endl;
    cout<<"Capacity: "<<V.capacity()<<endl;
    V.resize(10);
    cout<<"Size: "<<V.size()<<endl;
    cout<<"Capacity: "<<V.capacity()<<endl;
}