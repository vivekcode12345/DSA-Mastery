#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    int index=-1;
    int max=INT_MIN;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
        cout<<"the sum of " <<i<<"th"<< "row is :"<<sum<<endl; 
        if(max<sum){ 
            max=sum;
            index=i;  
        }
    }
    cout<<index;
    
}