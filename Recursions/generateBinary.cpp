#include<iostream>
#include<string>
using namespace std;
void genrate(string s,int n){
    if(s.length()==n){
        cout<<s<<endl;
        return;
    }
    genrate(s+"0",n);
    if(s.length()==0 || s[s.length()-1]=='0'){ //agar 0 hai to 1 laga do  aur empty string hai to bhi 1 laga do
        genrate(s+"1",n);
    }
}
int main(){
    int n=3;
    genrate("",3);
}