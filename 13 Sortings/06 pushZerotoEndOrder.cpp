#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={5,0,0,9,0};
    int x=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<x-1;i++){
        for(int j=0;j<x-i-1;j++){
            if(arr[j]==0){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(int i=0;i<x;i++){
        cout<<arr[i]<<" ";
    }
}