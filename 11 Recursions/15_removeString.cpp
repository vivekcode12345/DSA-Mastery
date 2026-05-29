#include<iostream>
#include<string>
using namespace std;

void removeChar(string ans,string original){
    if(original.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=original[0];
    
    if(ch=='a'){
        removeChar(ans,original.substr(1));
    }else{
        removeChar(ans+ch,original.substr(1));
    }
}

int main(){
    string str="Vaish verma";

    // string s="";
    // for(int i=0;i<str.length();i++){
    //     if(str[i]!='a'){
    //         s.push_back(str[i]);
    //     }
    // }
    // cout<<s<<endl;

    removeChar("",str);
}