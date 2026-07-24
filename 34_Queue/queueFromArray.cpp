#include<iostream>
#include<queue>
using namespace std;
class Queue{
    public:
    int front;
    int back;
    int arr[5];
    Queue(){
        front=-1;
        back=-1;
    }
    void push(int val){
        if(back==5){
            cout<<"Queue is full"<<endl;
            return;
        }
        arr[back]=val;
        back++;
    }
    void pop(){
        if(front==back){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        front++;
    }
    int front(){
        if(front==back){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[front];
    }
    int back(){
        if(front==back){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[back-1];
    }
    int size(){
        return back-front;
    }
    bool empty(){
        return back==front;
    }
    void display(){
        for(int i=front;i<back;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

}

int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.pop();
    display(q);

}