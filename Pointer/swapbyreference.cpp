#include<iostream>
using namespace std;
void swap(int*a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
    return;
}
int main(){
    int x=8,y=4;
    // cin>>x>>y;
    swap(&x,&y);
    cout<<x<<" "<<y<<endl;  
}