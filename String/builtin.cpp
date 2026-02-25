#include<iostream>
#include<string>
using namespace std;
int main(){
    // string str="raghav is best teacher";
    // cout<<str.size();
    // cout<<str.length(); //to get saize same hai
    // string str="abcd";
    // cout<<str<<endl;
    // str.push_back('a');
    // cout<<str<<endl; 

    // string s="abc";
    // s= "xyz"+s; // to add and modify and all.
    // cout<<s; 

    string s="abcdefgh";
    cout<<s<<endl;
    reverse(s.begin()+2,s.end()-2);
    cout<<s<<endl;



}
