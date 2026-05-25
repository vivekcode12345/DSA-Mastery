#include<iostream>
using namespace std;
int sum(int n){
    if(n==0){
        return 0;
    }
    return n%10+sum(n/10);
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int x=sum(n);
    cout<<"The sum of digits is "<<x<<endl;
}