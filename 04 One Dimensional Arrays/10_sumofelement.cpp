#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"print the size  of array :"<<endl;
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<x;i++){
        sum+=arr[i];
    }
    cout<<sum<<endl;
    return 0;


}