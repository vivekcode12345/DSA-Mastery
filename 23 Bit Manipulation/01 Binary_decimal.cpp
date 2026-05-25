#include<iostream>
using namespace std;

int binaryToDecimal(string binary){
    int n=binary.size();
    int result =0;
    for(int i=n-1;i>=0;i--){
        char ch=binary[i];
        int num=ch-'0';
        result+=num*(1<<(n-i-1));
    }
    return result;
}
int main(){
    string str;
    cout<<"Enter a binary number: ";
    cin>>str;
    cout<<"Decimal equivalent: "<<binaryToDecimal(str)<<endl;   
    return 0;
}