#include<iostream>
using namespace std;
bool power(int n){
    if(n==1){
        return true;
    }
    else if(n%2!=0){
        return false;
    }
    return power(n/2);
    
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(power(n)){
        cout<<n<<" is a power of 2."<<endl;
    }
    else{
        cout<<n<<" is not a power of 2."<<endl;
    }
    return 0;
}