#include <iostream>
using namespace std;

int main() {
    int arr[] = {0,1,3,4,5,6,7,8,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int low = 0, high = n - 1;
    int res=-1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid]==mid){
            low=mid+1; 
        }
        else {
            res=mid;
            high=mid-1;
        }

    }
    cout<<res;

}
