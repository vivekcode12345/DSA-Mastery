#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==mid+1){
            low=mid+1;
        }
        if(arr[mid]==mid){
            if(arr[mid]==arr[mid-1]){
                cout<<"The repeated number is : "<<arr[mid]<<endl; 
                break;
            }
            else{
                high=mid-1;
            }
        }
    }
}