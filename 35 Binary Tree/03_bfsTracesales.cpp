#include <bits/stdc++.h>
#include<queue>
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
void bfs(Node * root,int curr,int level){
    if(root==NULL){
        return;
    }
    if(curr==level){
        cout<<root->val<<" ";
        return;
    }
    bfs(root->left,curr+1,level);
    bfs(root->right,curr+1,level);
}
int levels(Node * root){
    if(root==NULL) return 0;
    return 1 + max(levels(root->left),levels(root->right));
}
void levelorder(Node * root){
    int n=levels(root);
    for(int i=1;i<=n;i++){
        bfs(root,1,i);
        cout<<endl;
    }
}
void levelorderQueue(Node * root){
    if(root==NULL) return;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node * curr=q.front();
        q.pop();
        cout<<curr->val<<" ";
        if(curr->left!=NULL) q.push(curr->left);
        if(curr->right!=NULL) q.push(curr->right);
    }
    cout<<endl;
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
    levelorderQueue(a); // level-order traversal
}