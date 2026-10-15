#include<iostream>
using namespace std;
#include<set>
#include<map>
int main(){
    // set<int>s;
    // s.insert(1);
    // s.insert(2);
    // s.insert(3);
    // for(int ele : s){
    //     cout<<ele<<endl;
    // }

    map<int, int>m;
    m[3] = 10;
    m[1] = 20;
    m[2] = 30;
    for(auto ele : m){
        cout<<ele.first<<" "<<ele.second<<endl;
    }
}