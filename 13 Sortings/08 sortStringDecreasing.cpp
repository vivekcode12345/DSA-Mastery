#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="EQXXYZA";
    int n=s.length();
    string res="";
    for(int i=0;i<n;i++){
        if(s[i]>='X'){
            res.push_back(s[i]);
        }
    }
    cout<<res;
}