#include<iostream>
#include<string>
using namespace std;

class Bike{
    public:
    int tyreSize;
    int speed;
};

void add(int a, int b) {
    cout << "Sum: " << a + b << endl;
}
void add(double a, double b) {
    cout << "Sum: " << a + b << endl;
} 

int main(){
    add(5, 10);
    add(3.5, 4.5); // This will cause a compilation error due to type mismatch
}
