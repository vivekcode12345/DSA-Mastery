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
class LinkedList{ // User defined data structure
    public:
    Node * head;
    Node * tail;
    int size; 
    public:
    LinkedList(){
        head=NULL;
        tail=NULL;
        size=0;
    }
    void insertAtTail(int val){
        Node * temp= new Node(val);
        if(size==0){
            head=temp;
            tail=temp;
        }
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    void display(){
        Node * temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
    }
    // Insertion at head
    void insertAtHead(int val){
    Node * temp= new Node(val);
    if(size==0){
        head=temp;
        tail=temp;
    }
    else{
        temp->next=head;
        head=temp;
    }
    size++;
    }


    // Insert at index
    void insertAtIndex(int index,int val){
        if(index<0 || index>size) cout<<"Invalid Index"<<endl;
        else if(index==0) insertAtHead(val);
        else if(index==size) insertAtTail(val);

        else{
            Node * t= new Node(val);
            Node * temp=head;
            for(int i=1;i<=index-1;i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            size++;
        }
    }

    // Get value at index

    int getIndex(int index){
        if(index<0 || index>=size) return -1;
        else{
            Node * temp=head;
            for(int i=1;i<=index;i++){
                temp=temp->next;
            }
            return temp->val;
        }
    }

    void deleteAtHead(){
        if(size==0){
            cout<<"Linked List is empty"<<endl;
            return; 
        }
        head=head->next;
        size--;
    }

    // Delete at tail
    void deleteAtTail(){
        if(size==0){
            cout<<"Linked List is empty"<<endl;
            return;
        }
        Node * temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        tail=temp;
        size--;
    }

    void deleteAtIndex(int index){
        if(index<0 || index>=size) cout<<"Invalid Index"<<endl;
        else if(index==0) deleteAtHead();
        else if(index==size-1) deleteAtTail();
        else{
            Node * temp=head;
            for(int i=1;i<=index-1;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            size--;
        }
    }
};

int main(){
    LinkedList ll;

    ll.insertAtTail(10);

    ll.insertAtTail(20);    

    ll.insertAtTail(30);


    ll.insertAtHead(50);

    ll.insertAtHead(60);

    ll.insertAtHead(70);


    // ll.insertAtIndex(2,100);
    // ll.display();
     
    // ll.deleteAtHead();

    // ll.deleteAtTail();

    ll.deleteAtIndex(2);
    ll.display();
    


}