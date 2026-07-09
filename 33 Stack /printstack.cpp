#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st;
    st.push(20);//1
    st.push(30);//2
    st.push(40);//
    while(st.size()>0){
        cout<<st.top()<<endl;
        st.pop();
    }
    // now suing extra stack
    stack<int> st1;
    while(st.size()>0){
        int x=st.top();
        st.pop();
        st1.push(x);
    }
    while(st1.size()>0){
        cout<<st1.top()<<endl;
        st1.pop();
    }
}
