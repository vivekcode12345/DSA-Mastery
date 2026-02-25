#include<iostream>
using namespace std;
int main(){
    int arr[]={4,2,9,7,8};
    int x=sizeof(arr)/sizeof(arr[0]);
    
    //used in methos 1 and 2..

    // bool flag=true;
    // for(int i=0;i<x;i++){
    //     int count=0;
    //     for(int j=0;j<x;j++){
    //         if(i==j) continue;
    //         if(arr[j]>arr[i]){
    //             count++;
    //         }
    //     }
    //     int aidx=x-count-1;
    //     int diff=aidx-i;

        //Method 1..

        // if(diff<0){
        //     diff=-diff;
        // }
        // if(diff>1){
        //     flag=false;
        //     break;
        // }

        // Method 2

        // if(aidx==0){
        //     if(arr[i]!=arr[aidx] && arr[i]!=arr[aidx+1]){
        //             flag=false;
        //             break;
        //     }
        //         break;
        //     }
        // }
        // else{
        //     if(arr[i]!=arr[aidx] && arr[i]!=arr[aidx-1] && arr[i]!=arr[aidx+1]){
        //         flag=false;
        //         break;
        //     }
        // }}
        // if(aidx==x-1){
        //     if(arr[i]!=arr[aidx] && arr[i]!=arr[aidx-1]){
        //         flag=false;

    //METHOD 3 THE BEST METHOD
    for(int i=0;i<x;i++){
        cout<<arr[i]<<" ";
    }    

    //almost sorted..
    for(int i=0;i<x-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
            i++;
        }
    }
    bool flag=true;
    for(int i=0;i<x-1;i++){
        if(arr[i]>arr[i+1]){
            flag=false;
            break;
        }
    }
    cout<<endl;
    if(flag==true){
        cout<<"Almost Sorted";
    }else{
        cout<<"Not almost sorted";
    }

    
}

