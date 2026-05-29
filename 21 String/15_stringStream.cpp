#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string str="Vivek is   biology teacher.";
    stringstream ss(str);
    string temp;

    while(ss>>temp){
        cout<<temp<<endl;
    }
}
