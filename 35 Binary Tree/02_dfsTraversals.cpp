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
    }å
};
void preorder(Node * root){
    if(root==NULL){ // base case
        return;
    }
    cout<<root->val<<" "; // work
    preorder(root->left); // left
    preorder(root->right); // right

}
void inorder(Node * root){
    if(root==NULL){ // base case
        return;
    }
    inorder(root->left); // left
    cout<<root->val<<" "; // work
    inorder(root->right); // right

}
void postorder(Node * root){
    if(root==NULL){ // base case
        return;
    }
    postorder(root->left); // left
    postorder(root->right); // right
    cout<<root->val<<" "; // work
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
    preorder(a); // preorder traversal
    cout<<endl;
    inorder(a); // inorder traversal
    cout<<endl;
    postorder(a); // postorder traversal
}