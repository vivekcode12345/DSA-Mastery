// prodt of element in array
#include<iostream>
using namespace std;
int main(){
    int n;
    int product=1;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        product=product*arr[i];
    }
    cout<<"Product of the element is :"<<endl;
    cout<<product;

}