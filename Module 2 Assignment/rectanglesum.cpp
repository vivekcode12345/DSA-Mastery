#include<iostream>
using namespace std;
int main(){
    int arr[3][4];
    cout<<"Enter the matrix elements";
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    int l1,r1;
    cout<<"Enter the first coordinate: ";
    cin>>l1>>r1;
    cout<<endl;
    int l2,r2;
    cout<<"Enter the second coordinate: ";
    cin>>l2>>r2;
    //Input..
    int sum=0;
    for(int i=min(l1,l2);i<=max(l1,l2);i++){
        for(int j=min(r1,r2);j<=max(r1,r2);j++){
            sum+=arr[i][j];
        }
    }
    cout<<sum<<" ";
}
    


