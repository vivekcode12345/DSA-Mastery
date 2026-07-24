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
void display(queue<int>&q){
    int n=q.size();
    for(int i=0;i<n;i++){
        int x= q.front();
        cout<<x<<" "<<endl;
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
int main(){
    queue<int>q;
    // PUSh POP  front=top  
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    display(q);
}