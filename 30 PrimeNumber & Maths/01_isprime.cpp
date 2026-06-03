#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
void Factorial(int n){
    int fact=1;
    for(int i=1;i< sqrt(n);i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    for(int i=sqrt(n);i>=1;i--){
        if(n%i==0){
            cout<<n/i<<" ";
        }
    }
}
int main(){
    // int n;
    // cout<<"Enter a number: ";
    // cin>>n;
    // cout<<n<<" is "<<(isPrime(n)?"a prime number":"not a prime number")<<endl;
    cout<<"Factors of 36 are: ";
    Factorial(36);
}