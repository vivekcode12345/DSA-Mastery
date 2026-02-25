#include<iostream>
using namespace std;
void printSum(int a, int b, int &sum){
    if(a>b) return;
    if(a==b){
        if(a%2!=0){
            sum+=a;
            return;
        }
    }
    if(a%2!=0){
        sum+=a;
        printSum(a+2,b,sum);
    }
    else{
        printSum(a+1,b,sum);
    }
}
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    if(a>b) swap(a,b);
    int sum=0;
    printSum(a,b,sum);
    cout<<"the sum is "<<sum<<endl;
    return 0;
}