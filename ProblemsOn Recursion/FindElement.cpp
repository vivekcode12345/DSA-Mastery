#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>&arr,int target,int idx){
    if(idx==arr.size()){
        return -1;
    }
    if(arr[idx]==target){
        return idx;
    }
    return search(arr,target,idx+1);

}
int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target element to find: ";
    cin>>target;
    cout<<search(arr,target,0)<<endl;
}