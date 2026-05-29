#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={4,2,7,9,8};
    int x=sizeof(arr)/sizeof(arr[0]);
    int brr[5];
    for(int i=0;i<x;i++){
        brr[i]=arr[i];
    };
    cout<<"Original array is: ";
    for(int i=0;i<x;i++){
        cout<<brr[i]<<" ";
    }

    for(int i=0;i<x-1;i++){
        bool flag=false;
        for(int j=0;j<x-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=true;
            }
        }
        if(flag==false){ // swap didn't happen.....
            break;
        }
    }
    cout<<endl;
    cout<<"Sorted array is: ";
    for(int i=0;i<x;i++){
        cout<<arr[i]<<" ";
    }

    //brr=4 2 7 9 8. arr= 2 4 7 8 9
    cout<<endl;
    cout<<"Checking if almost sorted or not: ";
    bool flag=true;
    for(int i=0;i<x;i++){
        if(i==0){
            if(brr[i]!=arr[i] && brr[i] != arr[i+1]){
                flag=false;
                break;
            }
        }    
        else if(i==x-1){
            if(brr[i]!=arr[i] && brr[i]!=arr[i-1]){
                flag=false;
                break;
            }
        }
        else{
            if(brr[i]!=arr[i] && brr[i]!= arr[i-1] && brr[i]!=arr[i+1]){
                flag=false;
                break;
            }
        }
    }
    cout<<flag<<endl;
}