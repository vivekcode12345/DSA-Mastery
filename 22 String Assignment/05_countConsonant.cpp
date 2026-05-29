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
    
    int count=0;
    for(int i=0;i<n;i++){
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u'
        ){
            count++;
        }
    }
    cout<<count;
}