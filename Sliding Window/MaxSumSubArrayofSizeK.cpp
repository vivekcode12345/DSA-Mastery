#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,5,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int Maxsum=0;
    int maxidx=-1;
    int prevSum=0;
    for(int i=0;i<k;i++){
        prevSum+=arr[i];
    }
    Maxsum=prevSum;
    int i=1;
    int j=k;
    
    while(j<n){
        prevSum = prevSum - arr[i-1] + arr[j];
        if(Maxsum<prevSum){
            Maxsum = prevSum;
            maxidx = i;
        }
        i++;
        j++;
    }
    cout<<"Max sum of subarray of size "<<k<<" is "<<Maxsum;
    cout<<endl<<"Starting index of the subarray is: "<<maxidx;
} 