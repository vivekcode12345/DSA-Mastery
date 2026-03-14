#include<iostream>
#include<vector>
using namespace std;
int partition(int arr[],int si,int ei){
    int pivotElement=arr[si];
    int count=0;
    for(int i=si+1;i<=ei;i++){
        if(arr[i]<=pivotElement){
            count++;
        }
    }
    int pivotIdx=si+count;
    swap(arr[si],arr[pivotIdx]);
    int i=si,j=ei;
    while(i<pivotIdx && j>pivotIdx){
        if(arr[i]<pivotElement){
            i++;
        }
        else if(arr[j]>pivotElement){
            j--;
        }
        else{
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
}
void quickSort(int arr[],int si,int ei){
    if(si>=ei){
        return;
    }
    int pi= partition(arr,si,ei);
    quickSort(arr,si,pi-1);
    quickSort(arr,pi+1,ei);

}
int main(){
    int arr[]={3,21,5,4,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } 
    cout<<endl;
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}


