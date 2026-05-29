#include<iostream>
using namespace std;
// void maxValue(int arr[],int n,int idx,int max){
//     if(idx==n){
//         cout<<max<<" "; 
//         return;
//     }
//     if(max<arr[idx]){
//         max=arr[idx];
//     }
//     maxValue(arr,n,idx+1,max);
// }

int maxArray(int arr[],int n,int idx){
    if(idx==n){
        return INT_MIN;
    }
    return max(arr[idx],maxArray(arr,n,idx+1));
}

int main(){
    int arr[]={30,2,4,1,5,6,3};
    // for(int e: arr){
    //     cout<<e<<" ";
    // }
    int n=sizeof(arr)/sizeof(arr[0]);
    // maxValue(arr,n,0,INT_MIN);
    cout<<maxArray(arr,n,0);

}