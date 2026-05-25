#include<iostream>
using namespace std;
int main(){
    int a=5;
    int *p=&a;
    cout<<p<<endl;
    *p=*p+1;
    cout<<*p<<endl;
}