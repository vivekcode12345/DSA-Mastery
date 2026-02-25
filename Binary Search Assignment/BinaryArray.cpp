#include <iostream>
using namespace std;

int main() {
    int arr[] = {0,0,0,0,0,0,0,1,1,1,1,1,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 1;
    int low = 0, high = n - 1;
    int firstIdx=-1;
    while (low <= high) { 
        int mid = (low + high) / 2;
        if (arr[mid] == x) {
            if(mid==0){
                firstIdx=mid;
                break;
            }
            else if(arr[mid-1]!=x) {
                firstIdx=mid;
                break;
            }
            else{
                high=mid-1;
            }
        } 
        else if (arr[mid] < x) {
            low = mid + 1;
        } 
        else {
            high = mid - 1;
        }
    }
    if(firstIdx==-1){
        cout<<-1<<endl;
    }
    else{
        cout<<(n-firstIdx)<<endl;
    }
}
