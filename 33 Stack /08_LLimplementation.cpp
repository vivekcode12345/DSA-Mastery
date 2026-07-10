#include<iostream>
using namespace std;
class Node{ // User defined data type
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val; 
        this->next=NULL;  
    }
}; 

class Stack {
    public:
    Node * head;
    int size;
    Stack() {
        head=NULL;
        size=0;
    }
    void push(int val){
        Node* temp = new Node(val);
        temp->next = head;
        head = temp;
        size++;
    }

    void pop(){
        if(head == NULL){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        head=head->next;
        size--;
    }
    int top(){
        if(head == NULL){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return head->val;
    }

    int getSize(){
        return size;
    }

    void display(){
        Node* current = head;
        while(current != NULL){
            cout<<current->val<<" ";
            current = current->next;
        }
        cout<<endl;
    }
};

int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    st.display();
}