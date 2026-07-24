#include<iostream>
#include<queue>
using namespace std;

void display(queue<int>q){
    while(!q.empty()){ // order of (N)
        cout<<q.front()<<" ";
        q.pop(); 
    }
     cout<<endl;
}
int reverse(queue<int>&q){
    stack<int>st;
    while(q.size()>0){
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    return 0;
}

int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    display(q);
    reverse(q);
    display(q);
}