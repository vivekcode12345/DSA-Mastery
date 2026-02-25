#include<iostream>
#include<climits>
using namespace std;
int main(){
    cout<<"Enter the string:";
    string s;
    cin>>s;

    string word="";
    string maxword="";

    int n= s.size();
    for(int i=0;i<n;i++){
        if(s[i]==' '){
            maxword=max(maxword,word);
            word="";
        }else{
            word+=s[i];
        }
    }
    maxword=max(maxword,word); // for the last word;
    cout<<"The lexicographically largest word is :"<<maxword<<endl;
}
