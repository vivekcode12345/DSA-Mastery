#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={5,-4,3,6,2,1};
    int x=sizeof(arr)/sizeof(arr[0]);

    //bubble sort..
    // for(int i=0;i<x-1;i++){
    //     for(int j=0;j<x-i-1;j++){
    //         if(arr[j]>arr[j+1]){
    //             int temp=arr[j];
    //             arr[j]=arr[j+1];
    //             arr[j+1]=temp;
    //         }
    //     }
    // }


    //Optimised approach of bubble sort..

    for(int i=0;i<x-1;i++){
        bool flag=false;
        for(int j=0;j<x-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=true;
            }
        }
        if(flag==false){ // swap didn't happen.....
            break;
        }
    }
    for(int i=0;i<x;i++){
        cout<<arr[i]<<" ";
    }
}