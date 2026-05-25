#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int arr[]={23,43,56,34,12,78,90};
    int n=7;
    for(int i=0;i<n;i++){ // printing array
        cout<<arr[i]<<" ";
    }

    vector<int>v(n,0); //0 means it is not visited
    for(int i=0;i<n;i++){
        int min=INT_MAX;
        int mindx=-1;
        for(int j=0;j<n;j++){
            if(v[j]==1) continue;
            if(arr[j]<min){
                min=arr[j];
                mindx=j;
            }
        }
        arr[mindx]=i;
        v[mindx]=1;
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
