#include<iostream>
#include<string>
using namespace std;
int main(){
    // int n;
    // cin>>n;
    int count=0;
    string str="vivek";
    int i=0;
    while(str[i]!='\0'){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            count++;
        }
        i++;
    }
    cout<<count<<endl;;
}
