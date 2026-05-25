//To find a unique number in the given array.
#include<iostream>
using namespace std;
#define max 100
int main(){
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
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }     
        }
        if(count!=2){
            cout<<arr[i]<<" ";  
        
        }
    }
    return 0;
}    