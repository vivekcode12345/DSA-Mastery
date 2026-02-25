//Finding three largest element in the array.
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

    int max1=INT_MIN;
    int max2=INT_MIN;
    int max3=INT_MIN;
    
    for(int i=0;i<n;i++){
        if(arr[i]>max1){
            max3=max2;
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2){
            max3=max2;
            max2=arr[i];
        }
        else if(arr[i]>max3){
            max3=arr[i];    
        }
    }    
    cout<<"Largest element is : "<<max1<<endl;
    cout<<"SLargest element is : "<<max2<<endl;
    cout<<"TLargest element is : "<<max3<<endl;
    return 0;
}