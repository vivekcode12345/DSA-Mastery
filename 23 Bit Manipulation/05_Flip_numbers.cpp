#include<iostream>
using namespace std;
int flip(int n){
    int temp=n;
    int mask=0;
    while(temp>0){
        mask=(mask<<1)|1;
        temp=temp>>1;
    }
    return n^mask;
}
int main(){
    int x=23;
    cout<<flip(x)<<endl;
    return 0;
}