#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    int arr[]={3,4,2,5,6,4,3,5,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    vector<int> ans(size);
    ans[0]=-1;
    stack<int>st;
    st.push(arr[0]);

    for(int i=1;i<size;i++){
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }
        if(st.size()==0){
            ans[i]=-1;
            st.push(arr[i]);
        }
        else{
            ans[i]=st.top();
            st.push(arr[i]);
        }
    }
    for(int i=0;i<size;i++){
        cout<<ans[i]<<" ";
    }
}