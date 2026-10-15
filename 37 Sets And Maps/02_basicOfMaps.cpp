#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    // pair<string,char>p;
    // p.first="Alice";
    // p.second='F';
    // cout<<p.first<<" "<<p.second<<endl;

    unordered_map<string,int>m;
    // pair<string,int>p2;
    // p2.first="Bob";
    // p2.second=30;
    // m.insert(p2);

    // pair<string,int>p3;
    // p3.first="Vivek";
    // p3.second=23;
    // m.insert(p3);
     
    // Next method

    m["Vivek"]=45;
    m["Saket"]=34;

    m.erase("Saket");
    
    for(auto ele: m){
        cout<<ele.first<<" "<<ele.second<<endl;
    }

    cout<<m["Vivek"]<<endl;
    
}