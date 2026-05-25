#include<iostream>
#include<vector>
#include<climits>
using namespace std;


int main(){
    int arr[]={64,23,12,22,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int el:arr){
        cout<<el<<" ";
    }
    cout<<endl;

    //Selection Sort
    for(int i=0; i<n-1;i++){
        int min=INT_MAX;
        int mindx=-1;
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                mindx=j;
            }
        }
        swap(arr[i],arr[mindx]); // inbuilt swap function
    }
    for(int el: arr){
        cout<<el<<" "; // printing Selected Sorted array
    }
}