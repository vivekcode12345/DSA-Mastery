#include<iostream>
#include<vector>
#include<climits>
using namespace std;


int main(){
    int arr[]={5,1,5,5,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    //Insertion sort..
    for(int i=1;i<=n-1;i++){
        int j=i;
        while(j>=1){
            if(arr[j]>=arr[j-1]) break;
            else swap(arr[j],arr[j-1]);
            j--;
        }
    }
    //Printing the sorted array..
    for(int el: arr){
        cout<<el<<" "; // printing Insertion Sorted array
    }
    cout<<endl;
    //Storing the sorted array into integer..
    int x=0;
    for(int i=0;i<n;i++){
        x=x*10;
        x+=arr[i];
    }
    cout<<x<<endl;
    
    //Second minimum array sum..
    for(int i=n-1;i>=1;i--){
        if(arr[i]!=arr[i-1]){
            swap(arr[i],arr[i-1]);
            break;
        }
    }
    // storing the element in integer
    int y=0;
    for(int i=0;i<n;i++){
        y=y*10;
        y+=arr[i];
    }
    cout<<y<<endl;

    cout<<"Minimum sum is: "<<x+y<<endl;

}