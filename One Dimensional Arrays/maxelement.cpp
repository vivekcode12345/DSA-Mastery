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
    
    int max=arr[0];
    for(int i=1; i<=n-1;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"maximum element is : "<<max<<endl;

}