#include<iostream>
using namespace std;
#include<vector>
int c=0;
int inversion(vector<int>&a,vector<int>&b){
    int i=0,j=0,count=0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
            count+=a.size()-i; // all the remaining elements in a will be greater than b[j]
            j++;
        }
        else{
            i++;
        }
    }
    return count;
}
void merge(vector<int>&a,vector<int>&b,vector<int>&v){
    int i=0,j=0,k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]) v[k++]=a[i++];
        else v[k++]=b[j++];
    }
    while(i<a.size()) v[k++]=a[i++];   
    while(j<b.size()) v[k++]=b[j++];    
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
    c+=inversion(a,b);
    merge(a,b,v);
    a.clear(); // clear the temporary arrays to save space
    b.clear();
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
    cout<<"Total inversions: "<<c<<endl;
}