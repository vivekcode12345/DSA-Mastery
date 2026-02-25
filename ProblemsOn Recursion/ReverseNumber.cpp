#include<iostream>
using namespace std;
int reverse(int n){
    static int ans=0;
    if(n==0){
        return ans;
    }
    int dig=n%10;
    ans=ans*10+dig;
    return reverse(n/10);

}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int x=reverse(n);
    cout<<"The reverse of the number is "<<x<<endl;
}