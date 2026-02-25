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

    //Insertion sort..
    for(int i=1;i<=n-1;i++){
        int j=i;
        while(j>=1){
            if(arr[j]>=arr[j-1]) break;
            else swap(arr[j],arr[j-1]);
            j--;
        }
    }

    for(int el: arr){
        cout<<el<<" "; // printing Insertion Sorted array
    }
    cout<<endl;

}