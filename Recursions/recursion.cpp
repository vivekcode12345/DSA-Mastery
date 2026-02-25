#include<iostream>
using namespace std;
void fun(){
    cout<<"Hello Vivek"<<endl;
    return;
    fun();
    return;
}
int main(){
    fun();
    return 0;
}