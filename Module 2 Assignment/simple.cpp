#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m=5,n=5;
    int arr[5][5];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           arr[i][j]=10;
        }
    }
    //Printing 2D matrix.......
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
