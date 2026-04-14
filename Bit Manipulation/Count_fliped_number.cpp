#include<iostream>
using namespace std;
int countFlipped(int a,int b){
    int temp=a^b;
    int count=0;
    while(temp>0){
        count+=temp&1;
        temp=temp>>1;
    }
    return count;
}
int main(){
    int a=23; //
    int b=45;//
    cout<<countFlipped(a,b)<<endl;
    return 0;
}