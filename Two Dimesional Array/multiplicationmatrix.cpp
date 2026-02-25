#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter no of row of 1st matrix :";
    cin>>m;
    int n;
    cout<<"Enter no of column of 1st matrix:";
    cin>>n;
    int p;
    cout<<"Enter no of row of 2nd matrix:";
    cin>>p;
    int q;
    cout<<"Enter no of column of 2nd matrix:";
    cin>>q;
    int arr[m][n];
    cout<<"enter elements of 1st matrix:";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int arr2[p][q];
    cout<<"enter elements of 2st matrix:";
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>arr[i][j];
        }
    }
    //resultant matrix
    int res[2][4];
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            res[i][j]=0;
            //res matrix
            for(int k=0;k<p;k++){
                res[i][j]+=arr[i][k]*arr2[k][j];
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}