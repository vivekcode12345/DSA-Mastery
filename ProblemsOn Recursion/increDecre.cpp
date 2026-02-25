#include<iostream>
using namespace std;
void print(int n, int i){
    if(i>n) return;
    cout<<i<<" ";
    print(n,i+1);
    if(i==1){
        return;
    }
    cout<<i-1<<" ";
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    print(n,1);
    return 0;
}