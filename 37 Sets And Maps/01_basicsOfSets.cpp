#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(3);
    s.insert(4);

    // erase an element
    s.erase(2);

    int target=2;
    if(s.find(target)!=s.end()){
        cout<<"Found"<<endl;
    }else{
        cout<<"Not Found"<<endl;
    }

    // size stores uique elements
    cout<<"Size of the set: "<<s.size()<<endl;
    
    // printing
    for(int ele:s){
        cout<<ele<<endl;
    }
}