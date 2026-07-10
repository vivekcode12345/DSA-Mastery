#include<iostream>
using namespace std;
class Stack {
    int arr[x];
    int top;
    public:
    Stack() {
        top = -1;
    }

    void push(int x){
        if(top==x-1){
            cout<<"Stack Overflow"
        }
        top++;
        arr[top]=x;
    }

    void pop(){
        if(top==-1){
            cout<<"stack underflow";
        }
        top--;
    }

}    