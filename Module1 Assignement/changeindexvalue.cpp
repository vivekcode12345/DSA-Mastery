//if even add 10 if odd make it to the multiple;
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

    for(int i=0;i<n;i++){
        if(i%2==0){
            arr[i]+=10;
        }
        else{
            arr[i]=arr[i]*2;
        }
    }
    cout<<endl;
    cout<<"Array after execution is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}    