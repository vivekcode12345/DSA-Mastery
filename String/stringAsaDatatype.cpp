#include<iostream>
#include<string>
using namespace std;
int main(){
    // string ch="Vivek Verma"; // 12 character including '\0';
    // cout<<ch[0]<<endl;
    string str;
    //cin>>str; // If no space then fine
    getline(cin,str);
    cout<<str; // First word will be printed
}
