#include<iostream>
using namespace std;
int main(){
    int arr[]={32,-13,42,-62,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    //Decreasing order of sorting
    for(int i=0;i<n;i++){
        bool flag=true;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                // int temp=arr[j];
                // arr[j]=arr[j+1];
                // arr[j+1]=temp;
                swap(arr[j],arr[j+1]); // inbuilt swap function
                flag=false;
            }
        }
        if(flag){
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
