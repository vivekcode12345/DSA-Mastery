#include<iostream>
using namespace std;
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
Node* construct(int arr[],int n){
    queue<Node*>q;
    Node* root = new Node(1); 
    q.push(root);
    int i=1;
    int j=2;
    while(q.size()>0 && i<n){
        Node *temp=q.front();
        q.pop();
        Node *l;
        Node *r;
        if(arr[i] != INT_MIN){
            l = new Node(arr[i]);
            temp->left = l;
            q.push(l);
        }
        if(j < n && arr[j] != INT_MIN){
            r = new Node(arr[j]);
            temp->right = r;
            q.push(r);
        }
        i += 2;
        j += 2; 
    }
    return root;

}
void levelOrderQueue(Node * root){
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
void leftBoundry(Node * root){
    Node * temp=root;
    cout<<temp->val<<" ";
    if(root==NULL) return;
    if(root->left!=NULL){
        leftBoundry(root->left);
    }
    else if(root->right!=NULL){
        leftBoundry(root->right);
    }
    else{
        return;
    } 
}
void bottomBoundary(Node * root){
    if(root==NULL)return;
    if(root->left==NULL && root->right==NULL){
        cout<<root->val<<" ";
        return;
    }
    bottomBoundary(root->left);
    bottomBoundary(root->right);
}
void rightBoundary(Node * root){
    if(root==NULL)return;
    if(root->left==NULL && root->right==NULL){
        return;
    }
    rightBoundary(root->right);
    if(root->right==NULL){
        rightBoundary(root->left);
    }
    cout<<root->val<<" ";
}
int main(){
    int arr[]={1,2,3,4,5,INT_MIN,6,7,INT_MIN,8,9,INT_MIN,10,INT_MIN,11,INT_MIN,12,INT_MIN,13,INT_MIN,14,15};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node * root= construct(arr,n);
    leftBoundry(root);
    bottomBoundary(root);
    rightBoundary(root->right);
}
