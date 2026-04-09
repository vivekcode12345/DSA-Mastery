#include<iostream>
using namespace std;

string DecimalToBinary(int decimal){
    string answer = "";
    while(decimal>0){
        if(decimal%2==0){
            answer=answer+"0";
        }else{
            answer+="1";
        }
        decimal=decimal/2;
    }
    return answer;
}
int main(){
    int dec;
    cout<<"Enter a Decimal number: ";
    cin>>dec;
    cout<<"Binary equivalent: "<<DecimalToBinary(dec)<<endl;   
    return 0;
}