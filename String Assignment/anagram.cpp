#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;

    if(s.size()!=t.size()){
        cout<<"Not Anagrams";
        return 0;
    }

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    if(s==t){
        cout<<"Anagrams";
    }else{
        cout<<"Not Anagrams";
    }
}