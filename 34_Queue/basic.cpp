#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    // PUSh POP  front=top  
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.size()<<endl;
}