#include<iostream>
using namespace std;
class Stack {
    int arr[5];
    int idx;
    public:
    Stack() {
        idx = -1;
    }

    void push(int x){
        if(idx==4){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        idx++;
        arr[idx]=x;
    }

    void pop(){
        if(idx==-1){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        idx--;
    }
    int top(){
        if(idx==-1){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return arr[idx];
    }

    int size(){
        return idx+1;
    } 
};

int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;

}