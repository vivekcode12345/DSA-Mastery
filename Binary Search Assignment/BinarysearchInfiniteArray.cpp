#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,4,6,8,9,12,34};
    int low=0;
    int high=1;
    int target=6;
    while(arr[high]<target){
        low=high;
        high=high*2;
    }
     
    bool flag=false;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target){
            flag=true;
            cout<<"Element found at index : "<<mid<<endl;
            break;
        }
        else if(arr[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }

    }
    if(flag){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }

}
