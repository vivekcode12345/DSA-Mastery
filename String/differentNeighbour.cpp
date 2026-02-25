#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string :";
    getline(cin,s);
    int count=0; 
    int len= s.length();
    for(int i=0;i<len;i++){
        if( len==1){
            break;
        }
        if(len ==2 && s[i]!=s[i+1]){
            count=1;
            break;
        }
        if(i==0){
            if(s[i]!=s[i+1]){
                count++;
            }
        }
        else if(i==len-1){
            if(s[i]!=s[i-1]){
                count++;
            }
        }
        else if(s[i]!=s[i+1] && s[i]!=s[i-1]){
            count++;
        }
   
    }
    cout<<count<<endl;
}