#include<iostream>
using namespace std;
#include<vector>
void merge(vector<int>&a,vector<int>&b,vector<int>&v){
    int i=0,j=0,k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            v[k++]=a[i++];
        }
        else{
            v[k++]=b[j++];
        }
    }
    while(i<a.size()){
        v[k++]=a[i++];
    }
    while(j<b.size()){
        v[k++]=b[j++];
    }
}
void mergeSort(vector<int>&v){
    int n=v.size();
    if(n==1){
        return;
    }
    int n1=n/2;
    int n2=n-n1;
    vector<int>a(n1),b(n2);
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[n1+i];
    }

    //magic happens here
    mergeSort(a);
    mergeSort(b);
    //now merge both the sorted arrays
    
    merge(a,b,v);
}    
int main(){
    int arr[]={3,21,5,4,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } 
    cout<<endl;
    vector<int>v(arr,arr+n);
    mergeSort(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}