#include<iostream>
using namespace std;
class Vehicle{
    public:
    int speed;
    int tyres;
    void fun(){
        cout<<"Base class function"<<endl;
    }
};
class Bike:public Vehicle{
    public:
    int engine;
    void fun(){
        cout<<"Derived class function"<<endl;
    }
};
int main(){
    Bike b;
    b.speed=100;
    b.tyres=2;
    b.engine=150;
    cout<<"Speed: "<<b.speed<<endl;
    cout<<"Tyres: "<<b.tyres<<endl;
    cout<<"Engine: "<<b.engine<<endl;
    b.fun();
    return 0;
}