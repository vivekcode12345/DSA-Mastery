#include<iostream>
using namespace std;
void display(int arr[],int n,int idx){
    if(idx<=n){
        cout<<arr[idx]<<" ";
        display(arr,n,idx+1);
    }
}

int main(){
    int arr[]={3,2,4,1,5,6,3};
    // for(int e: arr){
    //     cout<<e<<" ";
    // }
    int n=sizeof(arr)/sizeof(arr[0]);
    display(arr,n,0);

}