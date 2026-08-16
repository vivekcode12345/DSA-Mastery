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
    // Implementation for constructing the binary tree
    queue<Node*>q;
    Node* root = new Node(1); // Assuming the root value is 1 for demonstration
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

int main(){
    int arr[]={1,2,3,4,5,6,INT_MIN,INT_MIN,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node * root= construct(arr,n);
    levelOrderQueue(root);
}