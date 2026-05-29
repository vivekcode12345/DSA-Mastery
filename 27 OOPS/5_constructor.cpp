#include<iostream>
#include<string>
using namespace std;

class Bike{
    public:
    int tyreSize;

    // DefaultConstructor
    Bike() {
        cout<<"Default Constructor called!"<<endl;
    }   
    Bike(int tyreSize){
        this->tyreSize=tyreSize;
        cout<<"Parameterized Constructor called!"<<endl;
        cout<<"Tyre Size: "<<tyreSize<<endl;
    }
};

int main(){
    Bike TVS; // Default Constructor is called here  
    Bike Honda(20); // Parameterized Constructor is called here
}
