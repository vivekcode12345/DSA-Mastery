#include<iostream>
using namespace std;
class Node{ // double linkedList user defined
    public:
    int val;
    Node* next;
    Node * prev;
    Node(int val){
        this->val = val; 
        this->next=NULL;  
        this->prev=NULL;
    }
}; 
class Deque{ // User defined data structure
    public:
    Node * head;
    Node * tail;
    int size; 
    public:
    Deque(){
        head=NULL;
        tail=NULL;
        size=0;
    }
    void pushBack(int val){
        Node * temp= new Node(val);
        if(size==0){
            head=temp;
            tail=temp;
        }
        else{
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
        size++;
    }
    // Insertion at head
    void pushFront(int val){
        Node * temp= new Node(val);
        if(size==0){
            head=temp;
            tail=temp;
        }
        else{
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
        size++;
    }
    // Get value at index
    void popFront(){
        if(size==0){
            cout<<"Linked List is empty"<<endl;
            return; 
        }
        head=head->next;
        if(head) head->prev=NULL;;
        if(head==NULL) tail=NULL;
        size--;
    }

    // Delete at tail
    void popBack(){
        if(size==0){
            cout<<"Linked List is empty"<<endl;
            return;
        }
        else if(size==1){
            popFront();
            return;
        }else{
            Node * temp=tail->prev;
            temp->next=NULL;
            tail=temp;
            size--;
        }
    }
    void front(){
        if(size==0){
            cout<<"Queue is empty"<<endl;
            return; 
        }
        cout<<head->val<<endl;
    }

    void back(){
        if(size==0){
            cout<<"Queue is empty"<<endl;
            return; 
        }
        cout<<tail->val<<endl;
    }

    void display(){
        Node * temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
    }
};

int main(){
    Deque dq;
    dq.pushBack(10);
    dq.pushBack(20);
    dq.pushBack(30);
    dq.display();
    cout<<endl;

    dq.pushFront(5);
    dq.display();
    cout<<endl;

    dq.popFront();
    dq.display();
    cout<<endl;

    dq.popBack();
    dq.display();
    cout<<endl;
}