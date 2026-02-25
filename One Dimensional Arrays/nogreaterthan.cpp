#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"print the size of array : ";
    cin>>x;

    int arr[x];
    cout<<"enter the elements in array :";
    for(int i=0;i<x;i++){
        cin>>arr[i];  
    }

    int n;
    cout<<"enter the element: ";
    cin>>n;
    int count =0;
    for(int i=0;i<x;i++){
        if(arr[i]>n){
            count++;
        }
    }
    cout<<"The number of elements greater than given element is : "<<count<<endl;

}