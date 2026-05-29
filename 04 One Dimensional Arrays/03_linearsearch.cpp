#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"enter the element you want to search : "<<endl;
    cin>>x;
    bool flag=false;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            cout<<"found"<<endl;
            flag=true;
        } 
    }
    if(flag==true){
        cout<<"element found"<<endl;
    }
    else{
        cout<<"element not found"<<endl;   
    }  
}