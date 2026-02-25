#include<iostream>
using namespace std;
void firstNonrepaeating(vector<int>a,int n){
    bool flag=false;
    for(int i=0;i<n;i++){
        int j;
        for( j=0;j<n;j++){
            if(i!=j && a[i]==a[j]){
                break;
            }
        }
        if(j==n){
            cout<<"The first no repeating element is : "<<a[i]<<endl;
            flag=true;
            break;
        }
    }
    if(flag==false){
        cout<<" no non repeating element"<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
 
    firstNonrepaeating(a,n);
}