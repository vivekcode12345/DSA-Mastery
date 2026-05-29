#include<iostream>
using namespace std;
void firstlast(int *a){
    int ld,fd;
    ld=(*a)%10;
    cout<<"The last digit is :"<<ld<<endl;
    while((*a)>9){
        *a=(*a)/10; 
        
    }
    fd=*a;
    cout<<"The first digit is :"<<fd<<endl; 
    return;
    
}
int main(){
    int x;
    cout<<"Enter the Number :";
    cin>>x;
    firstlast(&x);
    return 0;
}