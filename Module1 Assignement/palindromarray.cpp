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

    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]==arr[j]){
            i++;
            j--;    
        }
        else{
            flag=true;
        }    
    }
    if(flag==true){  
        cout<<"Not a palindrome number";
    }
    else{
        cout<<" It is palindrome number.";
    }
}