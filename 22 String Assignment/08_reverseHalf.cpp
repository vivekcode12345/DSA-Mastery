#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter the string: ";
    cin>>s;

    int x=s.size();
    reverse(s.begin()+x/2,s.end());

    cout<<s;


}