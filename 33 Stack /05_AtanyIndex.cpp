#include<iostream>
#include<stack>
using namespace std;

void print(stack<int> st){
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
}

void pushAtAnyIndex(stack<int> &st, int index, int x){
    stack<int>temp;
    while(st.size()>index){
        temp.push(st.top());
        st.pop();
    }
    st.push(x);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
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
    cout<<endl;

    pushAtAnyIndex(st,2,100);
    print(st);
}