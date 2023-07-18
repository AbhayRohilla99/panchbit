
#include<iostream>
 #include<stack>
using namespace std;
// bhai stack ko implement krdo array ke use krke
class Stack {
    public:
    int*arr;
    int top;
    int size;
    // using cvonstructor
        Stack(int size){
        this->size=size;
        arr=new int(size);
        top=-1;
    }
    void push(int element){
        if(size - top > 1){
            top++;
            arr[top]=element;
        }
        else {
            cout<<"Stack overflow"<<endl;
        }
    }
    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<<" Stack underflow"<<endl;
        }
    }
    int peek(){
        if(top >= 0 && top < size){
            return arr[top];
        }
        else {
            cout<<"Stack is empty"<<endl;
            return -1;
        }
            
        }
        bool isEmpty() {
            if(top == 1)
                return true; 
                else 
                    return false;
                }
            
        };
        int main(){
            Stack st(5);
            
            st.push(22);
             st.push(44);
              st.push(56);
               st.push(69);
                st.push(70);
              
                cout<<st.peek()<<endl;
                st.pop();
                 cout<<st.peek()<<endl;
                 st.pop();
                  cout<<st.peek()<<endl;
                  st.pop();
                   cout<<st.peek()<<endl;
                   st.pop();
                    cout<<st.peek()<<endl;
                    st.pop();
                     cout<<st.peek()<<endl;
               cout<<"size of a stack="<<st.size<<endl;
                          return 0;
        }
    
            
            
            
            
            
            
            
            
            
            
            
            
            
            
    