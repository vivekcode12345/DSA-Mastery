#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,4,5,9,15,18,21,24};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=20;

    //Method 1:
    // for(int i=0;i<n;i++){
    //     if(arr[i+1]>x){
    //         cout<<"Lower bound of "<<x<<" is "<<arr[i];
    //         break;
    //     }
    // }

    //Method 2: Using binary search
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            cout<<"Lower bound of "<<x<<" is "<<arr[mid-1];
            return 0;
        }
        else if(arr[mid]<x){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    cout<<"Lower bound of "<<x<<" is "<<arr[high];

}