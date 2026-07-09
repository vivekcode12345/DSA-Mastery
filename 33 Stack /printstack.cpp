#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st;
    st.push(20);//1
    st.push(30);//2
    st.push(40);//
     
    // printing in the reverse order 
    while(st.size()>0){
        cout<<st.top()<<endl;
        st.pop();
    }
}