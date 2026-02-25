#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter the String: ";
    cin>>s;

    string temp=s;
    reverse(temp.begin(),temp.end());

    s+=temp; //concetanting string..

    cout<<s;


  
}