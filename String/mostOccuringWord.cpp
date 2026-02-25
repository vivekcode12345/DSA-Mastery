#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string str="Vivek is a  biology teacher. he is a therapist as well!";
    stringstream ss(str);
    string temp;
    vector<string>v;
    while(ss>>temp){
        v.push_back(temp);
    }
    sort(v.begin(),v.end());

    int maxcount=1;
    int count=1;

    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count=1;
        maxcount=max(maxcount,count);
    }
    
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count=1;
        if(count==maxcount){
            cout<<v[i]<<" "<<maxcount<<endl;
        }
    } 
    return 0;

}
