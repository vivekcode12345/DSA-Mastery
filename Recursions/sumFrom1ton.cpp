#include<iostream>
using namespace std;

// Function to print sum numbers from 1 to n using recursion
// void sumTon(int sum,int n){
//     if(n==0){    //Base Case
//         cout<<"Sum is: "<<sum<<endl;
//         return;   
//     }
//     sumTon(sum+n,n-1);
// }
int sum2(int n){
    if(n==0){
        return 0;
    }
    return n + sum2(n-1);
}
int main(){
    cout<<sum2(10)<<endl;
    return 0;
}
