#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(5);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    int x;
    cout<<endl;
    cout<<"Enter the number to search : ";
    cin>>x;
    int index=-1;
    for(int i=0;i<v.size();i++){
        if(x==v[i]){
            index=i;
        }
    }
    cout<<index<<endl;
 
}