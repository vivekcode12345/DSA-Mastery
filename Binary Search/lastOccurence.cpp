#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,2,3,3,3,3,3,4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 6;
    int low = 0, high = n - 1;
    bool flag = false;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == x) {
            // ✅ Check boundary before accessing arr[mid - 1]
            if (mid == n-1 || arr[mid + 1] != x) {
                flag = true;
                cout << "Last occurrence of " << x << " is at index " << mid;
                break;
            } else {
                low = mid +  1;
            }
        } 
        else if (arr[mid] < x) {
            low = mid + 1;
        } 
        else {
            high = mid - 1;
        }
    }

    if (!flag) {
        cout << -1 << endl;
    }
}
