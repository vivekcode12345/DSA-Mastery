#include<iostream>
using namespace std;
#define max 100
int main(){
    bool flag=false;
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
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<"Duplicate element is found : "<<arr[i];
                flag=true;
                break;
            }
        }
    }
    if(flag==false){
        cout<<"There is no duplicate element";
    }


}
