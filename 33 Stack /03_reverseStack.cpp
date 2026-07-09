#include<iostream>
#include<stack>
using namespace std;

void print(stack<int> st){
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
}

int main(){
    stack<int> st;
    st.push(20);//1
    st.push(30);//2
    st.push(40);//3
    st.push(50); //4
    st.push(34); //5

    print(st);
    stack<int>st1;
    stack<int>st2;
    // st to st1..
    while(st.size()>0){
        st1.push(st.top());
        st.pop();
    }

    // st1 to st2..
    while(st1.size()>0){
        st2.push(st1.top());
        st1.pop();
    }

    // st2 to st..
    while(st2.size()>0){
        st.push(st2.top());
        st2.pop();
    }
    print(st);


}