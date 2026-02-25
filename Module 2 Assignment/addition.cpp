#include<iostream>
using namespace std;
int main(){
    int m=3;
    int n=2;
    int arr[3][2]={1,2,3,4,5,6};
    int arr1[3][2]={1,2,4,5,6,5};
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr[i][j]+=arr1[i][j];
        }
    }
    //Printing the resultant matrix
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

    }
}