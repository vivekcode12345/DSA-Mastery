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
    
    //Updating the array.....
    for(int i=1;i<n;i=i+2){
        str[i]='#';
    }
   
    //Printing the array...
    for(int i=0;i<n;i++){
        cout<<str[i];
    }
}
