#include<iostream>
using namespace std;
class Student{
    public:
    int rollNo;
    int age;
    string name;
    Student(string n,int r,int a){
        name=n;
        rollNo=r;
        age=a;
    }

};
void printStudent(Student &s){
    s.name="Bob";
}
int main(){
    Student s1("Alice", 1, 20);
    cout<<"Name: "<<s1.name<<endl;
    printStudent(s1);
    cout<<"Name: "<<s1.name<<endl;
}