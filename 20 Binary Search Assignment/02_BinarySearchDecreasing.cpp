#include<iostream>
using namespace std;
int main(){
    int arr[]={9,7,6,4,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=2;
    int low=0;
    int high=n-1;
    bool flag=false;
    while(low<=high){
        int mid=(high+low)/2;
        if(arr[mid]==target){
            //cout<<mid<<endl;
            flag=true;
            break;
        }
        else if(arr[mid]>target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(flag){
        cout<<"Element found "<<endl;
    }
    
}