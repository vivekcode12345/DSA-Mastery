//Printing Diagonal elements of matrix.
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the number of row/col: "<<endl;
    cin>>m;
    int arr[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(i==j || (i+j)==(m-1)){
                cout<<arr[i][j];
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}