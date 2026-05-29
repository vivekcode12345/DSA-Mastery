//Total numbers of triplets are:::::: 
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
    int y;
    cout<<"Enter the number:";
    cin>>y;
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==y){
                    count++;
                }
            }
        }
    }
    cout<<"The total number of triplets are:";
    cout<<count;
}    