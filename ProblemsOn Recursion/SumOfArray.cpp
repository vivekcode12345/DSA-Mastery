// Array sum
#include<iostream>
using namespace std;
int sum(vector<int>&nums,int total_sum,int i){
    if(i==nums.size()){
        return total_sum;
    }
    total_sum+=nums[i];
    return sum(nums,total_sum,i+1);
}

int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int total_sum=0;
    cout<<"sum of the element are: "<<sum(nums,total_sum,0)<<endl;
}    