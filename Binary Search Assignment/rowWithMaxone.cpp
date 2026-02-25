 #include <iostream>
using namespace std;

int main() {
    int arr[3][4] = {{0,0,0,0},{1,0,0,1},{0,1,1,1}};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = sizeof(arr[0]) / sizeof(arr[0][0]);
    int rowWithMaxOnes = 0;
    int maxOnesCount = 0;

    for (int i = 0; i < n; i++) {
        int low = 0, high = m - 1;
        int firstIdx=-1;
        while (low <= high) { 
            int mid = (low + high) / 2;
            if (arr[i][mid] == 1) {
                if(mid==0){
                    firstIdx=mid;
                    break;
                }
                else if(arr[i][mid-1]!=1) {
                    firstIdx=mid;
                    break;
                }
                else{
                    high=mid-1;
                }
            } 
            else if (arr[i][mid] < 1) {
                low = mid + 1;
            } 
            else {
                high = mid - 1;
            }
        }
        if(firstIdx!=-1){
            int onesCount=m-firstIdx;
            if(maxOnesCount<onesCount){
                maxOnesCount=onesCount;
                rowWithMaxOnes=i;
            }
        }
        else{
            continue;
        }
    }
    cout<<"Row with maximum ones is: "<<rowWithMaxOnes<<" "<<"with count: "<<maxOnesCount<<endl;
}
