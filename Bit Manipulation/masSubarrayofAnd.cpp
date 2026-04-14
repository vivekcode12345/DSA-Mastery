#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,16,16,16};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=0;
    int count=0; 
    int max_Element=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max_Element){
            max_Element=arr[i];
            count=1;
        }
        else if(arr[i]==max_Element){
            count++;
        }
        ans=max(ans,count);
    }
    cout << ans << endl;
    return 0;
}