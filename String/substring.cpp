#include<iostream>
#include<string>
using namespace std;
int main(){
    // string s= "abcdef";
    // cout<<s.substr(1,3);
     
    string s;
    cout<<"Enter the string:";
    getline(cin,s);
    cout<<s.substr(s.length()/2);

}