#include<iostream>
#include<string>
using namespace std;
int main(){
    string name[]={"apple","orange","banana","grape","kiwi"};
    int n=5;
    for(int i=0;i<n;i++){
        cout<<name[i]<<" ";
    }
    
    cout<<endl;
    //Using bubble sort to sort the array of strings..
    for(int i=0;i<n-1;i++){
        bool flag=true;
        for(int j=0;j<n-1-i;j++){
            if(name[j]>name[j+1]){
                swap(name[j],name[j+1]);
                flag=false;
            }
        }
        if(flag){
            break;
        }
    }

    for(int i=0;i<n;i++){
        cout<<name[i]<<" ";
    }
}