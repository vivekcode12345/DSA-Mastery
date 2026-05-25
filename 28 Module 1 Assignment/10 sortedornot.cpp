//to check whether a given array is sorted or not.
#include<iostream>
using namespace std;
#define max 100
int main(){
    bool flag=false;
    cout<<"Enter the size of array :";
    int n;
    cin>>n;
    int arr[max];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){    
                flag=true;
            }
        }
    }
    if(flag==true) cout<<"Array is unshorted :"<<endl;
    if(flag==false) cout<<"Array is shorted :"<<endl;
    return 0;
}    