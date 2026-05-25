#include<iostream>
#include<vector>
using namespace std;
#include<vector>
using namespace std;
int main(){
    int arr[] = {2,-3,4,4,-7,-1,4,-2,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=4;
    int p=-1;
    int ans[n-k+1];
    for(int i=0;i<k;i++){
        if(arr[i]<0){
            p=i;
            break;
        }
    }
    if(p==-1){
        ans[0]=0;
    }
    else{
        ans[0]=arr[p]; 
    }
    int i=1;
    int j=k;
    
    while(j<n){
        if(p>i){
            ans[i]=arr[p];
        }else{
            for(p=i;p<=j;p++){
                if(arr[p]<0){
                    ans[i]=arr[p];
                    break;
                }
                else{
                    ans[i]=0;
                }
            }
        }
        i++;
        j++;
    }
    for(int i=0;i<n-k+1;i++){
        cout<<ans[i]<<" ";
    }
} 