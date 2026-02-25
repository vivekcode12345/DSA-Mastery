#include<iostream>
using namespace std;
int power(int base, int exponent){
    if(exponent%2==0){
        return power(base*base, exponent/2);
    }
    return base * power(base, exponent-1);
}
int main(){
    cout<<power(2,3);
}