#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reversepart(int i,int j,vector<int>&b){
    while(i<=j){
        int temp=b[i];
        b[i]=b[j];
        b[j]=temp;
        i++;
        j--;
    }
    return;

}
int main(){
    vector<int>v;
    v.push_back(2);
    v.push_back(5);
    v.push_back(1);
    v.push_back(6);
    v.push_back(7);
    v.push_back(4);
    display(v);
    reversepart(0,3,v);
    display(v);


}