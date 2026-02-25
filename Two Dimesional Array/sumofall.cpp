#include<iostream>
using namespace std;
// #include<climits>
int main(){
    // int m;
    // cout<<"enter the no of rows. :"<<endl;
    // cin>>m;
    // int n;
    // cout<<"enter the no of coloumns. :"<<endl;
    // cin>>n;
    int arr[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    int sum=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            sum+=arr[i][j];  
        }  
    }  
    cout<<sum;
}