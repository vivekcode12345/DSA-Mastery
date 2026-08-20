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
void nth(Node * root,int curr,int level){
    if(root==NULL){
        return;
    }
    if(curr==level){
        cout<<root->val<<" ";
        return;
    }
    nth(root->left,curr+1,level);
    nth(root->right,curr+1,level);
}
int levels(Node * root){
    if(root==NULL) return 0;
    return 1 + max(levels(root->left),levels(root->right));
}
void levelorder(Node * root){
    int n=levels(root);
    for(int i=1;i<=n;i++){
        nth(root,1,i);
        cout<<endl;
    }
}

void HorLevel(Node *root,int &min_level,int &max_level,int level){
    if(root==NULL) return;
    min_level=min(min_level,level);
    max_level=max(max_level,level);
    HorLevel(root->left,min_level,max_level,level-1);
    HorLevel(root->right,min_level,max_level,level+1);
}
void topview(vector<int> &top,Node * root,int level){
    if(root==NULL) return;
    if(top[level]==INT_MIN){
        top[level]=root->val;
    }
    topview(top,root->left,level-1);
    topview(top,root->right,level+1);
}
int main(){
    int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,9,INT_MIN,INT_MIN,7,INT_MIN,INT_MIN,INT_MIN,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node * root= construct(arr,n);
    int min_level=0;
    int max_level=0;
    HorLevel(root,min_level,max_level,0);
    int horzontal_levels=max_level-min_level+1;
    vector<int>top(horzontal_levels,INT_MIN);
    topview(top,root,-min_level);
    for(int i=0;i<top.size();i++){
       cout<<top[i]<<" ";
    }
}
