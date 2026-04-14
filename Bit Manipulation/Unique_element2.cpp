#include<iostream>
using namespace std;
void unique2(int arr[], int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    int temp=ans;
    int k=0;
    while(true){
        if((temp&1)){
            break;
        }
        temp=temp>>1;
        k++;
    }
    int retval = 0;
    for(int i = 0; i < n; i++){
        int num = arr[i];
        if(((num >> k) & 1) == 1) retval ^= num;
    }
    cout << retval << " ";
    int res = retval ^ ans;
    cout << res << " ";
}
int main(){ 
    int arr[] = {1,2,3,2,4,1};
    int n = 6;
    unique2(arr, n);
    return 0;
}