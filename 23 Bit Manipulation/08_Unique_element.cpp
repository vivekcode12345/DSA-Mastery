#include<iostream>
using namespace std;
int main(){
    vector<int>v={1,2,1,2,3,4,3,5,4};
    int ans=0;
    for(int i=0;i<v.size();i++){
        ans^=v[i];
    }
    cout<<ans<<endl;
}