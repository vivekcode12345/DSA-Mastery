#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cout<<"Enter the target : ";
    cin>>x;
    vector<int>v(5);
    cout<<"Enter the elements in the array : ";
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<v.size()-1;i++){
        for(int j=i+1; j<=v.size()-1;j++){
            if(v[i]+v[j]==x){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
}