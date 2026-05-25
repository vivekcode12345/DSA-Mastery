#include<iostream>
using namespace std;
int main(){
    int x,y;
//     x=5;
//     y=6;
     int *p=&x;
     int *q=&y;
//     cout<<*p + *q<<endl;
   cout<<"enter first number"<<endl;
   cin>>*p;
   cout<<"enter second  number"<<endl;
   cin>>*q;
   cout<<*p + *q;

}
