#include<iostream>
#include<stack>
using namespace std;
string removeConsequtive(string s){
    stack<char>st;
    for(int i=0;i<s.length();i++){
        if(st.size()==0){
            st.push(s[i]);
        }else{
            if(st.top()==s[i]){
                continue;
            }else{
                st.push(s[i]);
            }
        }
    }
    string result="";
    while(st.size()!=0){
        result+=st.top();
        st.pop();
    }
    reverse(result.begin(),result.end());
    return result;
}
int main(){
    string s="aaabbbccdaa";
    cout<<removeConsequtive(s)<<endl;

}