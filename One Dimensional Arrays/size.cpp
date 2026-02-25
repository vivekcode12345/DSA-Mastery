#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,6,4,3,2,7,8,9,4,5,6,7};
    int x=sizeof(arr)/sizeof(arr[0]);
    cout<<x<<endl;
}