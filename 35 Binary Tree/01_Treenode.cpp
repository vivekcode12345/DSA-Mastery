#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void display(Node * root){
    if(root==NULL){
        return;
    }
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
int sum(Node * root){
    if(root==NULL) return 0;
    return root->val + sum(root->left) + sum(root->right);
}
int size(Node * root){
    if(root==NULL) return 0;
    return 1 + size(root->left) + size(root->right);
}
int maxNode(Node * root){
    if(root==NULL) return INT_MIN;
    int leftMax=maxNode(root->left);
    int rightMax=maxNode(root->right);
    return max(root->val,max(leftMax,rightMax));
}
int main(){
    Node * a= new Node(10);
    Node * b= new Node(20);
    Node * c= new Node(30);
    Node * d= new Node(40);
    Node * e= new Node(50);
    Node * f= new Node(60);
    Node * g= new Node(70);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;

    display(a);
    cout<<endl;
    cout<<"Sum: "<<sum(a)<<endl;
    cout<<"Size: "<<size(a)<<endl;
    cout<<"Max: "<<maxNode(a)<<endl;
}