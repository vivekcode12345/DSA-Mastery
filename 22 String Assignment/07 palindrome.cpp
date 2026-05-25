#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    string str;
    cout<<"Enter the string :";
    cin>>str;
    
    int flag=false;
    int j=-1;
    for(int i=0;i<n/2;i++){
        if(str[i]!=str[n-1-i]){
            flag=true;
            break;
        }
    }
    if(flag==true){
        cout<<"This is not a pallindron";
    }else{
        cout<<"This is a palindrome String";
    }
}