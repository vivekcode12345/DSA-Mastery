//Sum of difference at even position element and odd position element.
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
    cout<<endl;
    int sum=0;
    int sum2=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            sum+=arr[i];
        }
        else{
            sum2+=arr[i];
        }
    }
    cout<<"The difference between them is: "<<endl;
    cout<<sum-sum2<<endl;
}