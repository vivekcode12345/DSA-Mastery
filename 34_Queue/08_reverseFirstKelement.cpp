#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int>q){
    while(!q.empty()){ // order of (N)
        cout<<q.front()<<" ";
        q.pop(); 
    }
     cout<<endl;
}
int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    display(q);
    int k=3;
    stack<int>st;
    // push the first k elements into the stack
    for(int i=0;i<k;i++){
        st.push(q.front());
        q.pop();
    }
    // reverse the first k elements
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    display(q);

    // to maintain the order of the remaining elements
    int size=q.size()-k;
    for(int i=0;i<size;i++){
        q.push(q.front());
        q.pop();
    }
    display(q);
}