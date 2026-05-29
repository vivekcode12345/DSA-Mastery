#include<iostream>
#include<string>
using namespace std;
int main(){
    // string str="vivek";
    // cout<<str<<endl;
    // str[1]='o';
    // cout<<str;
    string str="Vivek Verma";
    for(int i=1;str[i]!='\0';i++){
        if(i%2==0){
            str[i]='a';
        }
    }
    cout<<str;
}
