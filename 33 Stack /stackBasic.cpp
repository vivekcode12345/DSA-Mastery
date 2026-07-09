#include<iostream>
#include<stack>
using namespace std;

int main(){
     stack<int> st;
     cout<<"Size of stack: "<<st.size()<<endl;
     st.push(10);
    st.push(20);
    st.push(30);
    cout<<"Size of stack: "<<st.size()<<endl;

}