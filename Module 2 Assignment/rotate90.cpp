#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the no of rows: ";
    cin>>m;
    int n;
    cout<<"Enter the no. of coloumn: ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    cout<<"the matrix is"<<endl;;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"Printing transpose"<<endl;
    int arr2[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr2[j][i]=arr[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=m-1;i>=0;i--){
        for(int j=0;j<n;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    
}    