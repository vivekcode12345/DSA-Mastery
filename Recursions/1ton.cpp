#include<iostream>
using namespace std;

// Function to print numbers from 1 to n using recursion
void print(int i,int n){
    if(i>n){
        return;
    }
    cout<<i<<endl;
    print(i+1,n);
    
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    print(1,n);
    return 0;
}


// #include<iostream>
// using namespace std;

// // Function to print numbers from 1 to n using recursion
// void print(int n){
//     if(n==0){    //Base Case
//         return;   
//     }
    
//     print(n-1);
//     cout<<n<<endl;
// }
// int main(){
//     print(5);
//     return 0;
// }
