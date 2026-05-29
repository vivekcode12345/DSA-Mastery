#include<iostream>
using namespace std;

// Function to print numbers from n to 1 using recursion
void print(int n){
    if(n==0){    //Base Case
        return;   
    }
    cout<<n<<endl;
    print(n-1);
}
int main(){
    print(5);
    return 0;
}
