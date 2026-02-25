#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string:  ";
    cin>>s;

    int x=s.size();
    int ans=0;
    int product=1;
    for(int i=x-1;i>=0;i--){
        ans+=(s[i]-'0')*product; // Conversion in english..
        product*=10;
    }
    cout<<ans;

}