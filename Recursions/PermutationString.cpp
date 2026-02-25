#include<iostream>
#include<string>
#include<vector>
using namespace std;

void permutation(vector<string>&v,string ans, string original){
    if(original==""){
        v.push_back(ans);
        return;
    }
    for(int i=0;i<original.length();i++){
        char ch=original[i];
        string left=original.substr(0,i);
        string right=original.substr(i+1);
        permutation(v,ans+ch,left+right);
    }
}

int main(){
    string str="abc";
    vector<string>v;
    permutation(v,"",str);
    for(string s:v){
        cout<<s<<endl;
    }
}
