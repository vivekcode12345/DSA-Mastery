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
int removeAtEvenIndex(queue<int>&q){
    int n=q.size();
    for(int i=0;i<n;i++){
        if(i%2==0){
            q.pop();
        
        }else{
            int x=q.front();
            q.pop();
            q.push(x);
        }
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
    removeAtEvenIndex(q);
    display(q);
}  