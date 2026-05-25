#include <iostream>
#include <vector>
using namespace std;
int main(){
    int arr[]={3,1,5,4,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl; 
    for(int i=0;i<n;i++){
        while(arr[i]!=i+1){  
            swap(arr[i],arr[arr[i]-1]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}   