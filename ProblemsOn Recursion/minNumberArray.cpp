#include<iostream>
#include<algorithm>
using namespace std;
int minimum(vector<int>&nums,int &mini,int i){
    if(i==nums.size()){
        return mini;
    }
    mini=min(mini,nums[i]);
    return minimum(nums,mini,i+1);
}

int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int mini=INT_MAX;
    cout<<"Minimum element is: "<<minimum(nums,mini,0)<<endl;
}    