#include<iostream>
#include<string>
using namespace std;

class Bike{
    public:
    int tyreSize;
    int speed;

    // DefaultConstructor
    Bike() {
        cout<<"Default Constructor called!"<<endl;
    }   
    Bike(int ts,int spd) : tyreSize(ts), speed(spd) { // Initialisation List
        cout<<"Parameterized Constructor called!"<<endl;
    }
};

int main(){
    Bike TVS; // Default Constructor is called here  
    // Bike Honda(20); // Parameterized Constructor is called here
}
