#include<iostream>
using namespace std;
#include<vector>
    
int main(){
    int arr[]={3,21,5,4,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } 
    vector<int>v(arr,arr+n);
    cout<<endl;
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]>v[j]){
                cout<<"("<<v[i]<<" "<<v[j]<<")";
                count++;
            }
        }
    }
    cout<<endl;
    cout<<"Total inversions: "<<count<<endl;
}