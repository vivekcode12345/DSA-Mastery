#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(8); 
    cout<<v.capacity()<<endl;
    v.push_back(6);
    cout<<v.capacity()<<endl;
    v.push_back(4);
    cout<<v.capacity()<<endl;
    v.push_back(5);
    cout<<v.capacity()<<endl;
    v.push_back(6);
    cout<<v.capacity()<<endl; 

    cout<<"The elemments are : "<<end;
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    
}
