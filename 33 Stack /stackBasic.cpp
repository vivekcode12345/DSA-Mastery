#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st;
    cout<<"Size of stack: "<<st.size()<<endl;
    st.push(10);//0
    st.push(20);//1
    st.push(30);//2
    st.pop();
    cout<<"Size of stack: "<<st.size()<<endl;

}