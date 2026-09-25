#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    // pair<string,char>p;
    // p.first="Alice";
    // p.second='F';
    // cout<<p.first<<" "<<p.second<<endl;

    unordered_map<string,int>m;
    pair<string,int>p1;
    p1.first="Alice";
    p1.second=24;
    m.insert(p1);

    pair<string,int>p2;
    p2.first="Bob";
    p2.second=30;
    m.insert(p2);

    pair<string,int>p3;
    p3.first="Vivek";
    p3.second=23;
    m.insert(p3);

    for(auto ele: m){
        cout<<ele.first<<" "<<ele.second<<endl;
    }
}