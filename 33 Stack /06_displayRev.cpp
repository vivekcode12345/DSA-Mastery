#include<iostream>
#include<stack>
using namespace std;

void displayRev(stack<int> &st){
    if(st.size()==0){
        return;
    }
    int x=st.top();
    st.pop();
    displayRev(st);

    cout<<x<<" "; // print the reverse element
    st.push(x); //maintain the original stack

}
int main(){
    stack<int> st;
    st.push(20);//1
    st.push(30);//2
    st.push(40);//3
    st.push(50); //4
    st.push(34); //5

    displayRev(st);
}