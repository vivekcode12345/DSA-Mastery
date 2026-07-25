#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main(){

    int arr[]={3,-4,-7,30,7,-9,2,1,6,-1};

    int n=sizeof(arr)/sizeof(arr[0]);

    queue<int> q;
    vector<int> ans;

    int k=3;

    for(int i=0;i<n;i++){
        if(arr[i]<0){
            q.push(i);
        }
    }

    int i=0;

    while(i+k<=n){

        while(!q.empty() && q.front()<i){
            q.pop();
        }

        if(q.empty() || q.front()>=i+k){
            ans.push_back(0);
        }
        else{
            ans.push_back(arr[q.front()]);
        }

        i++;
    }

    for(int x:ans){
        cout<<x<<" ";
    }
}