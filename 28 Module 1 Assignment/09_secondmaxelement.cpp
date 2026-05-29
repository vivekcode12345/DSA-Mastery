//second largest element in the array..
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of Array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array is  :";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<" ";
    cout<<endl;

    int max1=INT_MIN;
    int max2=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2 && arr[i]!=max2){
            max2=arr[i];
        }
    }
    if(max2==INT_MIN){
        cout<<"Array does not contain second max element";
    }
    else{
        cout<<"second largest element is"<<endl;
        cout<<max2<<endl;
    }
    return 0;

}