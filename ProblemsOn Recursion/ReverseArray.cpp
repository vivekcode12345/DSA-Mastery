#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>&arr,int idx){
    if(idx==arr.size()){
        return;
    }
    print(arr,idx+1);
    cout<<arr[idx]<<" ";
}
int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    print(arr,0);
}