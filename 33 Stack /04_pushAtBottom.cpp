#include<iostream>
#include<stack>
using namespace std;

void print(stack<int> st){
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
}

void pushAtBottom(stack<int> &st, int x){
    if(st.size()==0){
        st.push(x);
        return;
    }
    int num=st.top();
    st.pop();
    pushAtBottom(st,x);
    st.push(num);
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

    pushAtBottom(st,100);
    print(st);


}